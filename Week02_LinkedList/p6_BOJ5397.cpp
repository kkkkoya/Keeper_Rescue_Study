#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string s;
        cin >> s;
        list<char> l = {};
        auto t = l.end();
        for (char e : s) {
            if (e == '<'){
                if (t != l.begin()) t--;}
            else if (e == '>') {
                if(t != l.end()) t++;}
            else if (e == '-') { 
                if (t != l.begin()) t=l.erase(--t);}
            else l.insert(t,e);}
        for (char e : l) cout<<e;
        cout<<'\n';
    }
    return 0;
}
