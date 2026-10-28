#include <bits/stdc++.h>
using namespace std;

void inputDeque(deque<int>& d) {
    string s;
    cin >> s;

    int num = 0;
    bool reading = false;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
            reading = true;
        }
        else if (reading) {
            d.push_back(num);
            num = 0;
            reading = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; 
    cin >> T;
    while (T--) {
        deque<int> d = {};
        string p;
        cin >> p;
        int n, cnt = 0;
        cin >> n;
        inputDeque(d);
        bool reverse = false;
        for (char c : p) {
            if (c == 'R') {
                if (!reverse) reverse = true;
                else reverse = false;
            }
            else {
                if (!d.empty()) {
                    if (!reverse) d.pop_front();
                    else d.pop_back();
                }
                else {
                    cout << "error\n";
                    cnt = 1;
                    break;
                }
            }
        }
        if (cnt == 0) {
            cout << "[";
            if (!reverse) {
                while (!d.empty()) {
                    cout << d.front();
                    d.pop_front();
                    if (!d.empty()) cout << ",";
                }
            }
            else {
                while (!d.empty()) {
                    cout << d.back();
                    d.pop_back();
                    if (!d.empty()) cout << ",";
                }
            }
            cout << "]\n";
        }
    }
    return 0;
}