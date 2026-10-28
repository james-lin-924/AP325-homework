#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,gold;
    cin >> n >> gold;
    vector<int> coin(n);
    for(int i=0;i<n;i++)cin >>coin[i];
    vector<int> dp(gold+1,1e9);
    dp[0]=0;
    for(int i=1;i<gold+1;i++){
        for(int j=0;j<n;j++){
            if(i-coin[j]>=0){
                dp[i]=min(dp[i],dp[i-coin[j]]+1);
            }
        }
    }
    if(dp[gold]==1e9)cout << -1;
    else cout << dp[gold];
}