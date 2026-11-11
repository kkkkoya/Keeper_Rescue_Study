#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> tree[1001];

int bfs(int start, int end) {
    bool visited[1001] = {};
    queue<pair<int, int>> q;

    q.push({start, 0});
    visited[start] = true;

    while (!q.empty()) {
        int cur = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (cur == end) {
            return dist;
        }

        for (auto next : tree[cur]) {
            int nextNode = next.first;
            int weight = next.second;

            if (!visited[nextNode]) {
                visited[nextNode] = true;
                q.push({nextNode, dist + weight});
            }
        }
    }

    return -1;
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N - 1; i++) {
        int a, b, d;
        cin >> a >> b >> d;

        tree[a].push_back({b, d});
        tree[b].push_back({a, d});
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        cout << bfs(a, b) << '\n';
    }

    return 0;
}