#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<string> C;
    for(int i=0;i<str.size();i++){
        C.push_back(str[i]);
        if(str[i]=='*'){
            C.pop_back();
            C.push_back((str[i-1]*str[i+1]));
            i++;
        }
        if(str[i]=='/'){
            C.pop_back();
            C.push_back((str[i-1]/str[i+1]));
            i++;
        }
    }
    for(int i=0;i<C.size();i++){
        cout << C[i];
    }
}