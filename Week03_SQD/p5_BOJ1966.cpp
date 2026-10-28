
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            q.push({p, i});
        }

        int result = 0;

        while (!q.empty()) {
            auto cur = q.front();
            q.pop();

            bool higher = false;

            queue<pair<int, int>> temp = q;

            while (!temp.empty()) {
                if (temp.front().first > cur.first) {
                    higher = true;
                    break;
                }
                temp.pop();
            }

            if (higher) {
                q.push(cur);
            }
            else {
                result++;

                if (cur.second == m) {
                    cout << result << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
