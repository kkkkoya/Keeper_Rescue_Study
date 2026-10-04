#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    list<int> l;

    int card = 1;

    for (int i = N - 1; i >= 0; i--) {

        if (v[i] == 1) l.push_front(card);
        else if (v[i] == 2) {
            auto it = l.begin();
            ++it;
            l.insert(it, card);
        }
        else  l.push_back(card);

        card++;
    }

    for (int x : l) cout << x << ' ';
    return 0;
}