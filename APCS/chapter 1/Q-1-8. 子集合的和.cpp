#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;
  int p[n+1],h[n+1];
  p[0]=INT_MAX;
  h[0]=INT_MAX;
  vector<pair<int, long long>> v;
  long long ans=0;
  for(int i=1;i<=n;i++){
    cin >>p[i];
  }
  for(int i=1;i<=n;i++){
    cin >>h[i];
  }
  v.push_back({0,INT_MAX});
  for(int i=1;i<=n;i++){
    int k=v.size();
    while(k>=0 && v[k].second>=p[i]+h[i]){
      k--;
    }
    ans+=i-v[k].first-1;
    while(!v.empty() && v.back().second<=p[i]){
      v.pop_back();
    }
    v.push_back({i,p[i]});
  }
  cout <<ans;
}