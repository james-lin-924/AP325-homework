#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;
  int a[n+5];
  vector<int> v;
  for(int i=0;i<n;i++){
    cin >>a[i];
  }
  int num=0;
  sort(a,a+n);
  for(int i=0;i<n;i++){
    if((a[i]!=a[i+1])){
      num++;
      v.push_back(a[i]);
    }
  }
  cout <<num <<"\n";
  for(int i=0;i<v.size();i++){
    cout <<v[i] <<" ";
  }
  cout <<"\n";
}