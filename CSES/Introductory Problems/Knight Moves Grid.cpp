#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> V(1001,vector<int>(1001,99999999));
queue<pair<pair<int,int>,int>> Q;

void run(){
    while(!Q.empty()){
        int x=Q.front().first.first;
        int y=Q.front().first.second;
        int dist=Q.front().second;
        Q.pop();
        if(x<0 || x>=n || y<0 || y>=n) continue;
        if(V[x][y] <= dist) continue;
        V[x][y] = dist;
        Q.push({{x+2,y+1},dist+1});
        Q.push({{x+2,y-1},dist+1});
        Q.push({{x-2,y+1},dist+1});
        Q.push({{x-2,y-1},dist+1});
        Q.push({{x+1,y+2},dist+1});
        Q.push({{x+1,y-2},dist+1});
        Q.push({{x-1,y+2},dist+1});
        Q.push({{x-1,y-2},dist+1});
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >>n;
    
    Q.push({{0,0},0});
    run();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << V[i][j] << " ";
        }
        cout <<"\n";
    }
}