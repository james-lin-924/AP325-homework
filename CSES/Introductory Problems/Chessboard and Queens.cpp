#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    bool board[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char c;
            cin >>c;
            if(c=='*')board[i][j]=1;
        }
    }
}

