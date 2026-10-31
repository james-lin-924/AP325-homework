#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int r,c,best=LLONG_MIN;
    cin >>r >>c;
    vector<vector<int>> v(r+1,vector<int>(c+1));
    vector<vector<int>> ps(r+1,vector<int>(c+1));
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin >>v[i][j];
            ps[i][j]=ps[i-1][j]+v[i][j];
        }
    }
    for(int top=1;top<=r;top++){
        for(int bottom=top;bottom<=r;bottom++){
            vector<int> temp(c+1);
            for(int i=1;i<=c;i++){
                temp[i]=temp[i-1]+ps[bottom][i]-ps[top-1][i];
            }
            int min_=LLONG_MAX;
            for(int right=1;right<=c;right++){
                min_=min(min_,temp[right]);
                best=max(best,temp[right]-min_);
            }
        }
    }
    cout <<best;
}