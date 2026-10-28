#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,sum=0,add=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        sum+=a[i]*(n-i);
    }
    cout << sum << "\n";
}