#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;
  long long a[n],temp[n];
  for(int i=0;i<n;i++){
    cin >>a[i];
    temp[i]=a[i];
  }
  vector<long long> v;
  sort(temp,temp+n);
  for(int i=0;i<n;i++){
    if(temp[i]!=temp[i-1]) v.push_back(temp[i]);
  }
  for(int i=0;i<n;i++){
    a[i]=lower_bound(v.begin(),v.end(),a[i])-v.begin();
  }
  for(int i=0;i<n;i++){
    cout <<a[i] <<" ";
  }
  cout <<"\n";
  return 0;
}