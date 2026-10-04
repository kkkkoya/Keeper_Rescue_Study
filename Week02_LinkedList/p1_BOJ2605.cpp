#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> cnt(N);

    for (int i = 0; i < N; i++) {
        cin >> cnt[i];
    }

    vector<int> v;

    for (int i = N - 1; i >= 0; i--) {
        v.insert(v.begin() + cnt[i], i + 1);
    }

    for (int x : v) {
        cout << x << ' ';
    }//연결 리스트도 가능하나 벡터에 비해 비효율적

    /*
    int N;
    cin >> N;

    vector<int> cnt(N);

    for (int i = 0; i < N; i++) {
        cin >> cnt[i];
    }

    list<int> l;

    for (int i = N - 1; i >= 0; i--) {
        auto it = l.begin();

        for (int j = 0; j < cnt[i]; j++) {
            ++it;
        }

        l.insert(it, i + 1);
    }

    for (int e : l) {
        cout << e << " ";
    }
    */
    return 0;
}