#include <bits/stdc++.h>
using namespace std;

int num[100005];
int freq[200005] = {};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,K;
    int Max = 0; //지금까지 최당 구간길이
    int count = 0; //현재 구간길이
    int left = 0; //left 포인터

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++) {

        freq[num[i]]++; //빈도수 세기
        count++;

        while(freq[num[i]] > K) {
            freq[num[left]]--;
            left++;
            count--;
        } //어떤 숫자의 빈도가 K를 넘기면 왼쪽 부터 줄이기  

        if(count > Max) Max = count;
    }

    cout << Max;
    return 0;
}