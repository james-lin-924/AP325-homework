#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int main(){
    int n,gold;
    cin >> n >> gold;
    vector<int> coin(n);
    for(int i=0;i<n;i++)cin >>coin[i];
    vector<int> dp(gold+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<gold;j++){
            if(j+coin[i]<=gold){
                dp[j+coin[i]]=(dp[j+coin[i]]+dp[j])%M;
            }
        }
    }
    cout << dp[gold];
}