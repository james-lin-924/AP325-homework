#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;
    int roundsum=0;
    cin >>n>>m;
    vector<int> p(n*2),key(m);
    vector<int> ps(n+1,0);

    for(int i=0;i<n;i++)cin >>p[i];
    for(int i=0;i<m;i++)roundsum+=key[i];
    for(int i=0;i<m;i++){
        int temp;
        cin >>temp;
        key[i]=temp%roundsum;
    }

    for(int i=0;i<n;i++)ps[i+1]=ps[i]+p[i];


}