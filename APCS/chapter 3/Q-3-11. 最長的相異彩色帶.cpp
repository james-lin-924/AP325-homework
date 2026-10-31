#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    vector<int> cnt(n);
    int left=0,max_=0;
    for(int right=0;right<n;right++){
        cnt[v[right]]++;
        while(cnt[v[right]]>1){
            cnt[v[left]]--;
            left++;
        }
        max_=max(max_,right-left+1);
    }
    cout <<max_<<"\n";
}