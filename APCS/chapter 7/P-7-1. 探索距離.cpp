#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m,s;
vector<int> adj[105];
int d[105];

void bfs(int s){
	bool visit[n]={false};
	queue<int> Q;
	Q.push(s);
	visit[s]=true,d[s]=0;
	int cnt=0,total=0;
	while(!Q.empty()){
		int v=Q.front();
		Q.pop();
		for(int u: adj[v]){
			if(!visit[u]){
				d[u]=d[v]+1;
				visit[u]=true;
				Q.push(u);
				cnt++;
				total+=d[u];
			}
		}
	}
	cout <<cnt<<" "<<total;
	return;
}

signed main(){
	cin >>n >>m >>s;
	for(int i=0;i<m;i++){
		int from,to;
		cin >>from >>to;
		adj[from].push_back(to);
	}
	bfs(s);
	return 0;
}