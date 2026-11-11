#include <bits/stdc++.h>
using namespace std;

vector<int> graph[501];
bool visited[501];
bool cycle;

void dfs(int cur, int parent) {
    visited[cur] = true;

    for (int next : graph[cur]) {
        if (!visited[next]) {
            dfs(next, cur);
        }
        else if (next != parent) {
            cycle = true;
        }
    }
}

int main() {
    int n, m;
    int tc = 0;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;

        tc++;

        for (int i = 1; i <= n; i++) {
            graph[i].clear();
            visited[i] = false;
        }

        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;

            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        int count = 0;

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                cycle = false;
                dfs(i, 0);

                if (!cycle) count++;
            }
        }

        cout << "Case " << tc << ": ";

        if (count == 0)
            cout << "No trees.\n";
        else if (count == 1)
            cout << "There is one tree.\n";
        else
            cout << "A forest of " << count << " trees.\n";
    }

    return 0;
}