#include <bits/stdc++.h>
using namespace std;

char lc[26], rc[26];

void preorder(char x) {
    if (x == '.') return;
    cout << x;
    preorder(lc[x - 'A']);
    preorder(rc[x - 'A']);
}

void inorder(char x) {
    if (x == '.') return;
    inorder(lc[x - 'A']);
    cout << x;
    inorder(rc[x - 'A']);
}

void postorder(char x) {
    if (x == '.') return;
    postorder(lc[x - 'A']);
    postorder(rc[x - 'A']);
    cout << x;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        lc[a - 'A'] = b;
        rc[a - 'A'] = c;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    cout << '\n';

    return 0;
}