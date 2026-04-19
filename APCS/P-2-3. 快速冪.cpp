#include <bits/stdc++.h>
using namespace std;

long long P;

long long eval(int x,int y){
  if(y==0) return 1;
  if(y%2==0){
    long long temp=eval(x,y/2);
    return (temp*temp)%P;
  }
  else{
    return (x*eval(x,y-1))%P;
  }
}

int main(){
  int x,y;
  cin >>x >>y >>P;
  cout <<eval(x,y) <<"\n";
  return 0;
}