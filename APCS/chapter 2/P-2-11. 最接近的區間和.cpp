#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
  int n,k,psum=0;
  cin >> n >> k;
  set<int> S({0}); //前綴合
  int best=0;
  for(int r=0;r<n;r++){
    int num;
    cin >>num;
    psum+=num;
    auto it=S.lower_bound(psum-k);
    if(it!=S.end()){
      best=max(best,psum-*it);
    }
    S.insert(psum);
  }
  cout <<best <<"\n";
}