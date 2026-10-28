#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,p,ans=0;
    cin >>n>>p;
    vector<int> num(n);
    vector<int> list;
    for(int i=0;i<n;i++){
        cin >>num[i];
    }
    sort(num.begin(),num.end());
    for(int i=0;i<n;i++){
        if(list.empty())list.push_back(num[i]);
        else{
            
        }
    }
}