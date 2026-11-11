#include <bits/stdc++.h>
using namespace std;

vector<int> tree[100001];
int parent[100001];
bool visited[100001];

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : tree[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                parent[next] = cur;
                q.push(next);
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        cout << parent[i] << '\n';
    }

    return 0;
}