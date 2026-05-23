#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin >>v[i];
  int max_deal=0,max_price=0;
  for(int i=n-1;i>=0;i--){
    max_price=max(max_price,v[i]);
    max_deal=max(max_deal,max_price-v[i]);
  }
  cout << max_deal << "\n";
}