#include <bits/stdc++.h>
using namespace std;
#define int long long 

int p;

int f(int x,int y){
  if(y==1)return x;
  if(y%2==0){
    int z=f(x,y/2);
    return (z*z)%p;
  }
  if(y%2==1){
    int z=f(x,y/2);
    return (z*z)%p*x%p;
  }
}

signed main(){
  int n;
  cin>>n>>p;
  for(int i=0;i<n;i++){
    int x;
    cin >>x;
    cout <<f(x,p-2)<<" ";
  }
}