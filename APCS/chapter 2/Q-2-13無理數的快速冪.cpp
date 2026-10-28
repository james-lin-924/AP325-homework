#include <bits/stdc++.h>
using namespace std;
#define int long long

int const mod=1e9+9;

pair<int,int> F(int x,int y,int n){
    if(x>mod && y>mod)return F(x%mod,y%mod,n);
    if(n==1)return {x,y};
    if(n%2==0){
        pair<int,int> p=F(x,y,n/2);
        return {p.first*p.first+2*p.second*p.second,p.first*p.second*2};
    }
    if(n%2==1){
        pair<int,int> p=F(x,y,n-1);
        return {p.first*x+2*p.second*y,p.first*y+p.second*x};
    }
}

signed main(){
    int x,y,n;
    cin >>x >>y >>n;
    pair<int,int> ans=F(x,y,n);
    cout <<ans.first <<" " <<ans.second <<"\n";
}