#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int k,m,n;
    cin >>k>>m>>n;
    vector<vector<int>> a(m+5,vector<int>(n+5));
    vector<vector<int>> ps(m+5,vector<int>(n+5));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }

    // ps[i][c] = 第 c 欄前 i 列 (row 0..i-1) 的和, ps[0][c]=0
    for(int j=0;j<n;j++){
        for(int i=1;i<=m;i++){
            ps[i][j]=ps[i-1][j]+a[i-1][j];
        }
    }
    int best=0;
    for(int i=1;i<=m;i++){
        for(int j=0;j<i;j++){
            set<int> S({0});
            int psum=0;
            for(int r=0;r<n;r++){
                psum+=ps[i][r]-ps[j][r];
                auto it=S.lower_bound(psum-k);
                if(it!=S.end()){
                    best=max(best,psum-*it);
                }
                S.insert(psum);
            }
        }
    }
    cout <<best <<"\n";
}