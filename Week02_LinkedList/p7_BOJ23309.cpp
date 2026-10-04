#include <bits/stdc++.h>
using namespace std;

int pre[1000005];
int nxt[1000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;

    int first, prev;
    cin >> first;
    prev = first;

    for (int i = 1; i < N; i++) {
        int cur;
        cin >> cur;

        nxt[prev] = cur;
        pre[cur] = prev;

        prev = cur;
    }

    nxt[prev] = first;
    pre[first] = prev;

    while (M--) {
        string cmd;
        int i, j;

        cin >> cmd;

        if (cmd == "BN") {
            cin >> i >> j;

            int next = nxt[i];
            cout << next << '\n';

            nxt[i] = j;
            pre[j] = i;

            nxt[j] = next;
            pre[next] = j;
        }

        else if (cmd == "BP") {
            cin >> i >> j;

            int prev = pre[i];
            cout << prev << '\n';

            nxt[prev] = j;
            pre[j] = prev;

            nxt[j] = i;
            pre[i] = j;
        }

        else if (cmd == "CN") {
            cin >> i;

            int deleteStation = nxt[i];
            cout << deleteStation << '\n';

            int next = nxt[deleteStation];

            nxt[i] = next;
            pre[next] = i;
        }

        else if (cmd == "CP") {
            cin >> i;

            int deleteStation = pre[i];
            cout << deleteStation << '\n';

            int prev = pre[deleteStation];

            nxt[prev] = i;
            pre[i] = prev;
        }
    }
    return 0;
}