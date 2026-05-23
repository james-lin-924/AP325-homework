#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
  return a.first*b.second<b.first*a.second;
}

int main(){
  int n;
  cin >>n;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++) cin >>v[i].first;
  for(int i=0;i<n;i++) cin >>v[i].second;

  sort(v.begin(),v.end(),comp);
  long long t=0,ans=0;
  for(int i=0;i<n;i++){
    t+=v[i].first;
    ans+=t*v[i].second;
  }
  cout << ans << "\n";
}