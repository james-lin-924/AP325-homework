#include <bits/stdc++.h>
using namespace std;


int n;
vector<int> v;
int rec(int goal, int index){
  if(index >=n)return 0;
  if(goal < v[index]) return rec(goal,index+1);
  return max(rec(goal,index+1),rec(goal-v[index],index+1)+v[index]);
}

int main(){
  int goal;
  cin >> n >> goal;
  v.resize(n);
  for(auto &i:v) cin >> i;
  sort(v.begin(),v.end());
  cout << rec(goal,0) <<"\n";
}