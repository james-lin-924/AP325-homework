#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,ans=0,sum=0;
    cin >>n;
    priority_queue<int> PQ;
    for(int i=0;i<n;i++){
        int temp;
        cin >>temp;
        sum+=temp;
        PQ.push(-temp);
    }
    
    while(PQ.size()!=1){
         ans -=PQ.top();
         int temp=PQ.top();
         PQ.pop();
         ans-=PQ.top();
         temp+=PQ.top();
         PQ.pop();
         PQ.push(temp);
    }
    cout<<sum<<"\n" <<ans<<"\n";
}