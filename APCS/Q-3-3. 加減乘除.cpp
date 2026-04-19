#include <bits/stdc++.h>
using namespace std;

string s;
int token = 0;

int factor() {
    return s[token++] - '0';
}

int term() {
    int val = factor();
    while (token < (int)s.size() && (s[token] == '*' || s[token] == '/')) {
        char op = s[token++];
        int rhs = factor();
        if (op == '*') val *= rhs;
        else val /= rhs;
    }
    return val;
}

int eval() {
    int val = term();
    while (token < (int)s.size() && (s[token] == '+' || s[token] == '-')) {
        char op = s[token++];
        int rhs = term();
        if (op == '+') val += rhs;
        else val -= rhs;
    }
    return val;
}

int main() {
    cin >> s;
    cout << eval() << "\n";
    return 0;
}