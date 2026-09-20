#include <bits/stdc++.h>
using namespace std;

int num[100005];
int freq[2000005] = {};//크기너무커서 지역변수로 만들면 스택 초과 전역으로 넣기

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,X;
    int cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cin >> X;

    for (int i = 0; i < n; i++) {
        if (num[i] <= X)  freq[num[i]] = 1;
    } //num[i]번째 freq에 해당 숫자있음 표시

    for (int i = 1; i < X - i; i++) {
        if (freq[i] > 0 && freq[X - i] > 0) cnt++;
    } //i,X-i 둘다 존재하면 cnt + 1

    cout << cnt;

    return 0;
}