#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    set<int> s;

    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;

        if (x == 1)
            s.insert(i);
    }

    int cur = 1;

    while (Q--) {
        int cmd;
        cin >> cmd;

        if (cmd == 1) {
            int i;
            cin >> i;

            if (s.count(i))
                s.erase(i);
            else
                s.insert(i);
        }
        else if (cmd == 2) {
            int x;
            cin >> x;

            cur = (cur - 1 + x) % N + 1;
        }
        else if (cmd == 3) {
            if (s.empty()) {
                cout << -1 << '\n';
                continue;
            }

            auto it = s.lower_bound(cur);

            if (it != s.end())
                cout << *it - cur << '\n';
            else
                cout << N - cur + *s.begin() << '\n';
        }
    }

    return 0;
}