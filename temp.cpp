#include <bits/stdc++.h>
using namespace std;
#define int long long

string s;
int pos=0;

int eval(){
    if(s[pos]=='f'){
        pos++;
        int x=eval();
        return 2*x-1;
    }
    else if(s[pos]=='g'){
        pos++;
        int x=eval();
        int y=eval();
        return x+2*y-3;
    }
    else{
        int num=0;
        while(s[pos]!=' ' && s[pos]>='0' && s[pos]<='9'){
            num=num*10+s[pos]-'0';
            pos++;
        }
        return num;
    }
}

signed main(){
    cin >> s;
    cout <<eval() <<"\n";
}