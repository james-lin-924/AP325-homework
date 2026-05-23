#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
    cin >>v[i].first >>v[i].second;
  }
  sort(v.begin(),v.end());
  long long ans=0;
  int head=v[0].first, tail=v[0].second;

  for(int i=1;i<n;i++){
    if(v[i].first<=tail){
      tail=max(tail,v[i].second);
    } else {
      ans+=tail-head;
      head=v[i].first;
      tail=v[i].second;
    }
  }
  ans+=tail-head;
  cout << ans <<"\n";
}