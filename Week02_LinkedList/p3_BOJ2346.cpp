#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    list<pair<int, int>> vp;

    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        vp.push_back({i, x});
    }

    auto it = vp.begin();

    while (!vp.empty()) {
        int move = it->second;

        cout << it->first << ' ';

        it = vp.erase(it);

        if (vp.empty())
            break;

        if (it == vp.end())
            it = vp.begin();

        if (move > 0) {
            for (int i = 0; i < move - 1; i++) {
                ++it;

                if (it == vp.end())
                    it = vp.begin();
            }
        }
        else {
            for (int i = 0; i < -move; i++) {
                if (it == vp.begin())
                    it = vp.end();

                --it;
            }
        }
    }

    
    return 0;
}