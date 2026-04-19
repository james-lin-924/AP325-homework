#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<long long> V, pre, wpre;
long long ans = 0;

void solve(int s, int t, int depth){
    if(depth == 0 || t - s < 2) return;

    long long sum_total = pre[t]  - pre[s-1];
    long long x_total   = wpre[t] - wpre[s-1];

    long long best = LLONG_MAX;
    int best_m = s+1;

    for(int m = s+1; m <= t-1; m++){
        long long val = abs(x_total - (long long)m * sum_total);
        if(val < best){
            best = val;
            best_m = m;
        }
    }

    ans += V[best_m];
    solve(s,best_m - 1,depth - 1);
    solve(best_m + 1, t,depth - 1);
}

int main(){
    cin >> n >> k;
    V.resize(n+1);
    pre.resize(n+2, 0);
    wpre.resize(n+2, 0);

    for(int i = 1; i <= n; i++) cin >> V[i];
    for(int i = 1; i <= n; i++){
        pre[i]  = pre[i-1]  + V[i];
        wpre[i] = wpre[i-1] + V[i] * i;
    }

    solve(1, n, k);
    cout << ans << "\n";
}