#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v(20,vector<int>(20));

int nqr(int n, int k, int q[]){
  if(k >= n) return 0;

  bool valid[20];
  for(auto &x : valid) x = true;
  for(int i = 0; i < k; i++){
    if(q[i] == -1) continue;
    valid[q[i]] = false;
    int x = q[i] - i + k;
    if(x >= 0 && x < n) valid[x] = false;
    int y = q[i] + i - k;
    if(y >= 0 && y < n) valid[y] = false;
  }

  q[k] = -1;
  int max_ = nqr(n, k+1, q);

  for(int i = 0; i < n; i++){
    if(valid[i]){
      q[k] = i;
      max_ = max(max_, nqr(n, k+1, q) + v[k][i]);
    }
  }
  return max_;
}

int main(){
  int n;
  cin >> n;
  int q[20];
  for(auto &x : q) x = -1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> v[i][j];
    }
  }
  cout << nqr(n, 0, q) << "\n";
}
