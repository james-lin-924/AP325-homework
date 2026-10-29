#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first) return a.second>b.second;
    return a.first>b.first;
}

signed main(){
    int n;
    cin >>n;
    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++){
        cin >>p[i].first;
    }
    for(int i=0;i<n;i++){
        cin >>p[i].second;
    }

    sort(p.begin(),p.end(),cmp);
    // for(int i=0;i<n;i++){
    //     cout <<p[i].first <<" "<<p[i].second<<"\n";
    // }
    int cover=0,tower=0;
    for(int i=0;i<n;i++){
        if(cover<p[i].second){
            cover=p[i].second;
            tower++;
        }
    }
    cout <<tower <<"\n";
}