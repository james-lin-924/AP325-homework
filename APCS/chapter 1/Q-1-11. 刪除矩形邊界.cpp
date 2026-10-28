// 1-11. 剪除矩形邊界 https://judge.tcirc.tw/problem/d009

#include <bits/stdc++.h>
using namespace std;

int grid[15][15];
int r_sum[15][15], c_sum[15][15];
int ans[15][15][15][15];


int find(int r1, int c1, int r2, int c2){
  //cout <<r1 <<" " <<c1 <<" " <<r2 <<" " <<c2 <<"\n";
  if(r1==r2 && c1==c2) return 0;
  if(ans[r1][c1][r2][c2]!=-1) return ans[r1][c1][r2][c2];
  int up_ones = c_sum[c2][r1] - c_sum[c1-1][r1];            
  int up = min(up_ones, c2-c1+1-up_ones);                   
  int down_ones = c_sum[c2][r2] - c_sum[c1-1][r2];          
  int down = min(down_ones, c2-c1+1-down_ones);             
  int left_ones = r_sum[r2][c1] - r_sum[r1-1][c1];          
  int left = min(left_ones, r2-r1+1-left_ones);             
  int right_ones = r_sum[r2][c2] - r_sum[r1-1][c2];         
  int right = min(right_ones, r2-r1+1-right_ones);          
  ans[r1][c1][r2][c2]=min({up+find(r1+1,c1,r2,c2), down+find(r1,c1,r2-1,c2), left+find(r1,c1+1,r2,c2), right+find(r1,c1,r2,c2-1)});
  return ans[r1][c1][r2][c2];
}

int main(){
  int r,c;
  cin >>r >>c;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      cin >>grid[i][j];
    }
  }
  for(int j=1;j<=c+1;j++){
    for(int i=1;i<=r+1;i++){
      r_sum[i][j]=r_sum[i-1][j]+grid[i][j];
    }
  }
for(int i=1;i<=r+1;i++){
    for(int j=1;j<=c+1;j++){
      c_sum[j][i]=c_sum[j-1][i]+grid[i][j];
    }
}
/*
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      cout <<r_sum[i][j] <<" ";
    }
    cout <<"\n";
  }
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      cout <<c_sum[j][i] <<" ";
    }
    cout <<"\n";
  }
*/
  for(int i=0;i<=r;i++){
    for(int j=0;j<=c;j++){
      for(int k=i;k<=r;k++){
        for(int l=j;l<=c;l++){
          ans[i][j][k][l]=-1;
        }
      }
    }
  }
  find(1,1,r,c);
  cout <<ans[1][1][r][c] <<"\n";
  return 0;
}