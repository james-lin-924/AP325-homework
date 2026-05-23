#include <bits/stdc++.h>
using namespace std;

int n,t;
long long quest=0;
vector<int> v;

bool check(long long mid){
  int t_copy = t;
  long long E = mid;
  for(int i=0;i<n;i++){
    if(E-v[i]<0){
      if(t_copy==0 || mid<v[i]) return false;
      t_copy--;
      E=mid;
    }
    E-=v[i];
  }
  return true;
}

int main(){
  long long left=0,right=0;
  cin >>n >>t;
  v.resize(n);
  for(int i=0;i<n;i++){
    cin >>v[i];
    quest+=v[i];
  }
  right=quest;
  while(left<right){
    long long mid=(left+right)/2;
    if(check(mid)){
      right=mid;
    }
    else{
      left=mid+1;
    }
  }
  cout <<left <<"\n";
}