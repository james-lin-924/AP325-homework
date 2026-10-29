#include <bits/stdc++.h>
using namespace std;
#define int long long

struct P{
    int t;
    int d;
};

bool cmp(P a,P b){
    return a.t<b.t;
}

signed main(){
    int n;
    cin >>n;
    vector<P> p(n);
    for(int i=0;i<n;i++){
        cin >>p[i].t;
    }
    for(int i=0;i<n;i++){
        cin >>p[i].d;
    }
    sort(p.begin(),p.end(),cmp);
    int in=0,out=0;
    for(int i=0;i<n;i++){
        in += p[i].d;
        out +=p[i].t*(n-i);
    }
    cout << in - out <<"\n";
}