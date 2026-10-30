#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;
  vector<int> p(n+1),h(n+1);
  vector<pair<int, long long>> v;
  long long ans=0;
  for(int i=1;i<=n;i++){
    cin >>p[i];
  }
  for(int i=1;i<=n;i++){
    cin >>h[i];
  } 
  v.push_back({0,(long long)INT_MAX});
  for(int i=1;i<=n;i++){
    long long threshold=(long long)p[i]+h[i];
    int lo=0,hi=(int)v.size()-1,k=-1;
    while(lo<=hi){
      int mid=(lo+hi)/2;
      if(v[mid].second>threshold){ k=mid; lo=mid+1; }
      else hi=mid-1;
    }
    ans+=i-v[k].first-1;
    while(!v.empty() && v.back().second<=p[i]){
      v.pop_back();
    }
    v.push_back({i,p[i]});
  }
  cout <<ans;
}