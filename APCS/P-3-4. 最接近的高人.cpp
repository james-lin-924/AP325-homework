#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,ans=0;
  cin >>n;
  vector<long long> v(n+1);
  vector<pair<long long,long long>> s;
  v[0]=LONG_LONG_MAX;
  s.push_back({0,LONG_LONG_MAX});
  for(long long i=1;i<=n;i++)cin >>v[i];
  for(long long i=1;i<=n;i++){
    while(v[i]>=s.back().second){
      s.pop_back();
    }
    ans+=i-s.back().first;
    s.push_back({i,v[i]});
    
    //for(long long i=1;i<s.size();i++)cout <<s[i].first<<" ";
    //cout <<"\n";
  }
  cout << ans << "\n";
}