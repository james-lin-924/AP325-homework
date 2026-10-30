#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin >>n;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        int m,s,t;
        cin >>m >>s >>t;
        p.push_back({s,m});
        p.push_back({t+1,-m});
    }
    sort(p.begin(),p.end());
    int max_=0,current=0;
    for(int i=0;i<p.size();i++){
        current+=p[i].second;
        max_=max(max_,current);
    }
    cout <<max_<<"\n";
}