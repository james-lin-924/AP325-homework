#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,g,max_=0,count=0;
    cin >> n >> g;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    int left=0;
    int total=0;
    for(int right=0;right<n;right++){
        total+=v[right];
        while(total>g && left<=right){
            total-=v[left];
            left++;
        }
        if(total==max_){
            count++;
        }
        else if(total>max_){
            max_=total;
            count=1;
            // for(int i=left;i<=right;i++){
            //     cout <<v[i]<<" ";
            // }
            // cout <<"\n";
        }
    }
    cout <<max_<<" "<<count <<"\n";
}