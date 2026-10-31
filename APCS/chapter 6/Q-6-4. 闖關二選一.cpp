#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,s;
    cin >>n>>s;
    vector<vector<int>> v(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin >>v[i][0]>>v[i][1];
    }
    vector<vector<int>> dp(n,vector<int>(2));
    dp[0][0]=abs(v[0][0]-s);
    dp[0][1]=abs(v[0][1]-s);
    for(int i=1;i<n;i++){
        dp[i][0]=min(abs(v[i-1][0]-v[i][0])+dp[i-1][0],abs(v[i-1][1]-v[i][0])+dp[i-1][1]);
        dp[i][1]=min(abs(v[i-1][0]-v[i][1])+dp[i-1][0],abs(v[i-1][1]-v[i][1])+dp[i-1][1]);
    }
    cout << min(dp[n-1][0],dp[n-1][1]) << "\n";
}
