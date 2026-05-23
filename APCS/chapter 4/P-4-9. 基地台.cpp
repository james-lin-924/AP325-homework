#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
vector<int> v;

bool cover(int r,int k){
  k--;
  int right_edge=v[0]+r;
  for(int i=1;i<n;i++){
    if(v[i]>right_edge){
      k--;
      if(k<0) return false;
      right_edge=v[i]+r;
    }
  }
  return true;
}

signed main(){
  int left=0,right=0,k;
  cin >>n >>k;
  v.resize(n);
  for (int &i:v) cin >>i;
  sort(v.begin(),v.end());
  right=2000000000;
  while(left+1<right){
    int mid=(left+right)/2;
    if(cover(mid,k)) right=mid;
    else left=mid;
  }
  cout <<right <<"\n";
}