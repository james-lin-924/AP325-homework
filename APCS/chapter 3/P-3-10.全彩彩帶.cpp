#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> seq,cnt;
map<int,int> mp;

signed main(){
    int n;
    cin>>n;
    seq.assign(n,0);
    cnt.assign(n,0);
    for(int i=0;i<n;i++){
        cin>>seq[i];
        mp[seq[i]]=0;
    }
    int n_color=0;
    for(auto &x:mp){
        x.second=n_color;
        n_color++;
    }
    int right=0,left=0,w_color=0,min_=LLONG_MAX;
    while(right<n){
        int color=mp[seq[right]];
        cnt[color]++;
        if(cnt[color]==1)w_color++;
        right++;
        while(true){
            color=mp[seq[left]];
            if(cnt[color]==1)break;
            cnt[color]--;
            left++;
        }
        if(w_color==n_color)min_=min(min_,right-left);
    }
    cout <<min_<<"\n";
}