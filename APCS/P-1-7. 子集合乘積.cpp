#include <bits/stdc++.h>
using namespace std;

const int mod = 10009;

int main(){
    int n;
    long long a[30];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<long long> dp(mod, 0);
    dp[1] = 1;
    for(int i = 0; i < n; i++){
        vector<long long> temp(mod, 0);
        for(int j = 0; j < mod; j++){
            if(dp[j] == 0) continue;
            temp[j] += dp[j];
            temp[(j * (a[i] % mod)) % mod] += dp[j];
        }
        dp = temp;
    }

    cout << dp[1] - 1 << "\n";
}