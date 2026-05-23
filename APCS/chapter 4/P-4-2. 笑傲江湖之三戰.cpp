#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >>n;
  vector<int> A(n),B(n);
  for(int i=0;i<n;i++){
    cin >>A[i];
  }
  for(int i=0;i<n;i++){
    cin >>B[i];
  }

  sort(A.begin(),A.end());
  sort(B.begin(),B.end());

  int head=0,tail=n-1,win=0;
  for(int i=n-1;i>=0;i--){
    if(B[tail]>A[i]){
      win++;
      tail--;
    }
    else{
      head++;
    }
  }
  cout <<win <<"\n";
}