#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> tower(n);
    for(int i=0;i<n;i++)cin >>tower[i];

    set<int> S;
    S.insert(tower[0]);
    for(int i=1;i<n;i++){
        auto it=S.lower_bound(tower[i]);
        if(*it == tower[i])S.insert(tower[i]);
        else if(it==S.end()){
            S.insert(tower[i]);
        }
        else{
            S.erase(it);
            S.insert(tower[i]);
        }
    }
    cout <<S.size();
}