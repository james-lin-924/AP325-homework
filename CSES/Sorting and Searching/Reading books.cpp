#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,t=0,M=0;
    cin >>n;
    vector<int> book(n);
    for(int i=0;i<n;i++){
        cin >>book[i];
        t+=book[i];
        M=max(M,book[i]);
    }
    cout <<max(M*2,t) <<"\n";

}