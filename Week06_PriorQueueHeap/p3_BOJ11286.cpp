#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, x;
    cin >> N;

    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>> pq;

    for (int i = 0; i < N; i++) {
        cin >> x;

        if (x == 0) {
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top().second << '\n';
                pq.pop();
            }
        }
        else {
            pq.push({abs(x), x});
        }
    }
    return 0;
}