#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    vector<int> dp(n);
    dp[0]=v[0];
    dp[1]=min(v[0]+v[1],v[1]);
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1],dp[i-2])+v[i];
    }
    cout <<dp[n-1] <<"\n";
}