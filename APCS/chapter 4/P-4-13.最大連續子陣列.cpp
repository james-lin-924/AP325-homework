#include <bits/stdc++.h>
using namespace std;
#define int long long

int main(){
    int n;
    cin >>n;
    int max_=0,current=0;
    for(int i=0;i<n;i++){
        int m;
        cin >>m;
        current=max(0LL,current+m);
        max_=max(max_,current);

    }
    cout <<max_<<"\n";
}