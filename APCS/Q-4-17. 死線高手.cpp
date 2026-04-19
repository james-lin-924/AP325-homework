#include <bits/stdc++.h>
using namespace std;

int main(){
  int z;
  cin >>z;
  while(z--){
    int n;
    cin >>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
      cin >>v[i].second;
    }
    for(int i=0;i<n;i++){
      cin >>v[i].first;
    }
    sort(v.begin(),v.end());
    bool pass=true;
    int t=0;
    for(int i=0;i<n;i++){
      t+=v[i].second;
      if(v[i].first<t){
        pass=false;
      }
    }
    if(pass) cout <<"yes\n";
    else cout <<"no\n";
  }
}