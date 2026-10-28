#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin >>n;
    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++){
        cin >>p[i].second>>p[i].first;
    }
    sort(p.begin(),p.end());
    int pos=p[0].first,ans=0;
    for(int i=0;i<n;i++){
        if(p[i].first<=pos)continue;
        ans++;
        pos=p[i].first;
    }
    cout <<ans<<"\n";
    // for(int i=0;i<n;i++){
    //     cout <<p[i].second<<" "<<p[i].first<<"\n";
    // }
}