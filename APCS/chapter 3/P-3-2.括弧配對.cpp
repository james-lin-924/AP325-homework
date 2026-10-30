#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    string s;
    while(getline(cin,s)){
        stack<char> st;
        bool correct = true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }
            }
            if(s[i]==']'){
                if(st.top()=='['){
                    st.pop();
                }
            }
            if(s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
            }
        }
        if(st.empty()&&correct){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}