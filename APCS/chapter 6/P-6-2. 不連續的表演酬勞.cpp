#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin >>n;
    vector<vector<int>> dp(n,vector<int>(2));
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >>v[i];
	}
	dp[0][0]=0;
	dp[0][1]=v[0];
	
	for(int i=1;i<n;i++){
		dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
		dp[i][1]=dp[i-1][0]+v[i];
	}
	cout <<max(dp[n-1][0],dp[n-1][1])<<"\n";
}