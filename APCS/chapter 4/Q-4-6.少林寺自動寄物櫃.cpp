#include <bits/stdc++.h>
using namespace std;
#define int long long

struct P{
    int w;
    int m;
};

bool comp(P a, P b){
    return a.w*b.m > b.w*a.m;
}

signed main(){
    int n;
    cin >> n;
    vector<P> p(n);
    for(int i=0;i<n;i++){
        cin >> p[i].w;
    }
    for(int i=0;i<n;i++){
        cin >> p[i].m;
    }

    sort(p.begin(),p.end(),comp);

    // for(int i=0;i<n;i++){
    //     cout << p[i].w << " " << p[i].m << "\n";
    // }

    int ans=0,move=0;
    for(int i=0;i<n;i++){
        ans+=move*p[i].w;
        move+=p[i].m;
    }
    cout << ans <<"\n";
}