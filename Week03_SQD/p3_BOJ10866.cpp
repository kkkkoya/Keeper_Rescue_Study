#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    deque<int> d = {};
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (s == "push_front") {
            int X;
            cin >> X;
            d.push_front(X);
        }
        else if (s == "push_back") {
            int X;
            cin >> X;
            d.push_back(X);
        }
        else if (s == "pop_front") {
            if (d.empty()) cout << "-1\n";
            else {
                cout << d.front() << "\n";
                d.pop_front();}
        }
        else if (s == "pop_back") {
            if (d.empty()) cout << "-1\n";
            else {
                cout << d.back() << "\n";
                d.pop_back();}
        }
        else if (s == "size") cout << d.size() << "\n";
        else if (s == "empty") {
            if (d.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else if (s == "front") {
            if (d.empty()) cout << "-1\n";
            else cout << d.front() << "\n";
        }
        else if (s == "back") {
            if (d.empty()) cout << "-1\n";
            else cout << d.back() << "\n";
        }
    }
    return 0;
}