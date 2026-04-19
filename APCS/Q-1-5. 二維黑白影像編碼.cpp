#include <bits/stdc++.h>
using namespace std;

string str;
int token=0;

int eval(int n){
  int num = (int)str[token++]-'0';
  if(num == 0)return 0;
  else if(num == 1)return n;
  else{
    return eval(n/4)+eval(n/4)+eval(n/4)+eval(n/4);
  }
}

int main(){
  int n;
  cin >>str >>n;
  cout <<eval(n*n);
  return 0;
}