#include <bits/stdc++.h>
using namespace std;
#define int long long


deque<pair<int,int>> min_q,max_q;
vector<int> v(1000005);

void put_max(int i){
    while(!max_q.empty() && v[i] >=max_q.back().second){
        max_q.pop_back();
    }
    max_q.push_back({i, v[i]});
}

void put_min(int i){
    while(!min_q.empty() && v[i] <=min_q.back().second){
        min_q.pop_back();
    }
    min_q.push_back({i, v[i]});
}

signed main(){
    int n,l,max_=0;
    cin >>n >>l;
    for(int i=0;i<n;i++){
        cin >>v[i];
    }
    put_max(0);
    put_min(0);

    for(int i=0;i<n;i++){
        if(max_q.front().first<= i-l){
            max_q.pop_front();
        }
        put_max(i);
        if(min_q.front().first<= i-l){
            min_q.pop_front();
        }
        put_min(i);
        int def = max_q.front().second - min_q.front().second;
        max_ = max(max_,def);
    }
    cout <<max_ <<"\n";
}