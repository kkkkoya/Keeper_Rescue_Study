#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin >> N >> M;
    vector <int> v(N+1);

    for (int i = 1; i <= N; i++) {
        if (i == 1) cin >> v[i];
        else {
            int k;
            cin >> k;
            v[i] = v[i-1] + k; //누적합을 구함.
        }
    }
    while (M--) {
        int i,j;
        cin >> i >> j;
        int result = v[j] - v[i-1];
        cout << result << "\n"; //누적합 구한 후 v[j] - v[i-1] 해서 구간의 합 구하기
    }
    return 0;
}