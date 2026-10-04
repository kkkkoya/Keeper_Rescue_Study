#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int M;
    cin >> s >> M;
    list<char> l = {};
    for (auto e : s) l.push_back(e);
    auto t = l.end();
    for (int i = 0; i < M; i++) {
        char k,k2;
        cin >> k;
        if (k == 'L' && t != l.begin()) t--;
        else if (k == 'D' && t != l.end()) t++;
        else if (k == 'B'&& t != l.begin()) t = l.erase(--t); //이터레이터를 바로 넣어주는게 아닌 반환하기 때문에 넣어줘야 함
        else if (k == 'P') {
            cin >> k2;
            l.insert(t,k2);
        }
    }
    for (char c : l) cout << c;
    return 0;
}