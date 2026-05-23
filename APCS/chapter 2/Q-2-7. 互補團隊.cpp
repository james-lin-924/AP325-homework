#include <bits/stdc++.h>
using namespace std;

int m, n;

long long F(const string& s) {
    long long mask = 0;
    for (char c : s) {
        int idx = c - 'A';
        if (idx >= 0 && idx < m)
            mask |= (1LL << idx);
    }
    return mask;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n;

    long long full = (1LL << m) - 1;  

    int ans = 0;
    multiset<long long> st;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        long long mask = F(s);
        long long need = full ^ mask; //XOR
        if (st.count(need))
            ans += st.count(need);
        st.insert(mask);
    }

    cout << ans << "\n";
}