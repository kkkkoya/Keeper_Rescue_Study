#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    stack<int> s = {};

    for (int i = 0; i < N; i++) {
        
        string str;
        cin >> str;
        
        if (str == "push") {
            int k;
            cin >> k;
            s.push(k);}

        else if (str == "pop") {
            if (!s.empty()) {
                cout << s.top() << '\n';
                s.pop();}
            else cout << "-1\n";}
        
        else if (str == "size") cout << s.size() << '\n';

        else if (str == "empty") {
            if (s.empty()) cout << "1\n";
            else cout << "0\n";}
        
        else if (str == "top") {
            if (!s.empty()) cout << s.top() << '\n';
            else cout << "-1\n";}
        
    }
    return 0;
}

