#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,l,total=0,max_=0;
    cin >>n >>l;
    vector<int> cnt(100005);
    vector<int> color(n);
    for(int i=0;i<n;i++){
        cin >>color[i];
    }
    for(int i=0;i<n;i++){
        cnt[color[i]]+=1;
        if(cnt[color[i]]==1)total+=1;
        if(i-l>=0){
            cnt[color[i-l]]-=1;
            if(cnt[color[i-l]]==0)total-=1;
        }
        max_ = max(max_,total);
    }
    cout <<max_ <<"\n";
}