#include <bits/stdc++.h>
using namespace std;

int grid[15][15];
int r_sum[15][15], c_sum[15][15];

int find(int r1, int c1, int r2, int c2){
  if(r1==r2 && c1==c2) return 0;
  int up=min(r_sum[r1][c2]-r_sum[r1][c1-1],(c2-c1)-(r_sum[r1][c2]-r_sum[r1][c1-1]));
  int down=min(r_sum[r2][c2]-r_sum[r2][c1-1],(c2-c1)-(r_sum[r2][c2]-r_sum[r2][c1-1]));
  int left=min(c_sum[r2][c1]-c_sum[r1-1][c1],(r2-r1)-(c_sum[r2][c1]-c_sum[r1-1][c1]));
  int right=min(c_sum[r2][c2]-c_sum[r1-1][c2],(r2-r1)-(c_sum[r2][c2]-c_sum[r1-1][c2]));
  return min({up+find(r1+1,c1,r2,c2), down+find(r1,c1,r2-1,c2), left+find(r1,c1+1,r2,c2), right+find(r1,c1,r2,c2-1)});
}


int main(){
  int r,c;
  cin >>r >>c;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin >>grid[i][j];
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(i==0)r_sum[i][j]=grid[i][j];
      else r_sum[i][j]=r_sum[i-1][j]+grid[i][j];
      if(j==0) c_sum[i][j]=grid[i][j];
      else c_sum[i][j]=c_sum[i][j-1]+grid[i][j];
    }
  }
  cout <<find(0,0,r-1,c-1) <<"\n";
  return 0;
}