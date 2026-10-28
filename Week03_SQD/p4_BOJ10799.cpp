#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string l;
    cin >> l;
    stack<char> s;
    int result = 0;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] == '(') s.push('(');
        else {
            s.pop();
            if (l[i-1] == '(') result += s.size();
            else result++;
        }
    }
    cout << result << '\n';
    return 0;
}