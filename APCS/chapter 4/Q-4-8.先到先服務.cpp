#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int n,t;
    cin >>n >>t;
    priority_queue<int> PQ;
    for(int i=0;i<t;i++){
        int temp;
        cin >>temp;
        PQ.push(-temp);
    }
    for(int i=0;i<n-t;i++){
        int temp=PQ.top(),in;
        cin >>in;
        PQ.pop();
        PQ.push(temp-in);
    }
    int ans;
    while(!PQ.empty()){
        ans=PQ.top();
        PQ.pop();
    }
    cout <<-ans<<"\n";
}