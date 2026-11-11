#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<string, greater<string>> s;

    for (int i = 0; i < N; i++) {
        string name, state;
        cin >> name >> state;

        if (state == "enter") {
            s.insert(name);
        }
        else {
            s.erase(name);
        }
    }

    for (string name : s) {
        cout << name << '\n';
    }

    return 0;
}