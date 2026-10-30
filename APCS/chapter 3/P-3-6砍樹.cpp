#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,l,total=0,maxh=0;
    cin >>n >>l;
    vector<int> h(n+2);
    vector<int> pos(n+2);
    for(int i=1;i<=n;i++){
        cin >>pos[i];
    }
    for(int i=1;i<=n;i++){
        cin >>h[i];
    }
    pos[0]=0;
    pos[n+1]=l;
    h[0]=LLONG_MAX;
    h[n+1]=LLONG_MAX;
    stack<int> s;
    s.push(0);
    for(int i=1;i<=n;i++){
        if(pos[i]-h[i]>=pos[s.top()] || pos[i]+h[i]<=pos[i+1]){
            total++;
            maxh=max(maxh,h[i]);
            while(pos[s.top()]+h[s.top()]<=pos[i+1]){
                total++;
                maxh=max(maxh,h[s.top()]);
                s.pop();
            }
        }
        else{
            s.push(i);
        }
    }
    cout <<total <<" " <<maxh<<"\n";
}