#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin >>n;
    vector<int> v(n);
    vector<int> dp(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    dp[0]=v[0];
    dp[1]=v[1];
    dp[2]=v[2]+min(v[1],v[0]);
    for(int i=3;i<n;i++){
        dp[i]=min(dp[i-1],min(dp[i-2],dp[i-3]))+v[i];
    }
    // for(int i=0;i<n;i++){
    //     cout <<dp[i]<<" ";
    // }
    cout <<min(dp[n-1],dp[n-2])<<"\n";
}