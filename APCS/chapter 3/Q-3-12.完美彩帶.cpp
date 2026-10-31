#include <bits/stdc++.h>
using namespace std;
#define int long long

map<int,int> dic;

signed main(){
    int m,n;
    cin >>m >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
        dic[v[i]]=0;
    }
    int n_color=0;
    for(auto &e:dic){
        e.second=n_color;
        n_color++;
    }
    vector<int> cnt(m);
    // for(int i=0;i<n;i++){
    //     cout <<dic[v[i]] <<" ";
    // }
    int w_color=0,ans=0;
    for(int i=0;i<m;i++){
        cnt[dic[v[i]]]++;
        if(cnt[dic[v[i]]]==1) w_color++;
    }
    for(int i=m;i<n;i++){
        int color=dic[v[i]];
        if(cnt[color]==0) w_color++;
        cnt[color]++;
        if(cnt[dic[v[i-m]]]==1) w_color--;
        cnt[dic[v[i-m]]]--;

        if(w_color==m)ans++;
    }
    cout <<ans <<"\n";

}