#include <bits/stdc++.h>
using namespace std;

int num[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,S;
    cin >> N >> S;

    int count = 0;
    int sum = 0;
    int left = 0;
    int Min = N+1;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++) {
        sum += num[i];
        count++;
        while (sum >= S) {
            if (Min > count) Min = count;
            sum -= num[left];
            left++;
            count--;
        }
    }
    
    if (Min == N+1) cout << '0';
    else cout << Min;

    return 0;
}