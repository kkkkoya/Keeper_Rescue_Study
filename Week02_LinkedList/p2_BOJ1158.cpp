#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N,K;
    cin >> N >> K;
    list<int> l = {};

    for (int i = 1; i <= N; i++)
        l.push_back(i);

    auto t = l.begin();

    cout << '<';

    while (!l.empty()) {
        for (int i = 1; i < K; i++) {
            t++;
            if (t == l.end())
                t = l.begin();
        }

        cout << *t;

        t = l.erase(t);

        if (!l.empty() && t == l.end())
            t = l.begin();

        if (!l.empty())
            cout << ", ";
    }

    cout << '>';

    return 0;
}
