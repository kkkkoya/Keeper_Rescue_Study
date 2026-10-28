
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    deque<int> d, s;
    deque<int> dg, sg;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        d.push_back(a);
        s.push_back(b);
    }

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            dg.push_back(d.back());
            d.pop_back();
        }
        else {
            sg.push_back(s.back());
            s.pop_back();
        }
        if (d.empty() || s.empty()) break;
        if ((!dg.empty() && dg.back() == 5) ||
            (!sg.empty() && sg.back() == 5)) {

            while (!sg.empty()) {
                d.push_front(sg.front());
                sg.pop_front();
            }
            while (!dg.empty()) {
                d.push_front(dg.front());
                dg.pop_front();
            }
        }
        else if (!dg.empty() && !sg.empty() &&
                 dg.back() + sg.back() == 5) {
            while (!dg.empty()) {
                s.push_front(dg.front());
                dg.pop_front();
            }
            while (!sg.empty()) {
                s.push_front(sg.front());
                sg.pop_front();
            }
        }
    }
    if (d.size() > s.size()) cout << "do\n";
    else if (d.size() < s.size()) cout << "su\n";
    else cout << "dosu\n";

    return 0;
}
