#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    int i = 0;
    int j = 0;
    cin >> N >> M;

    vector<int> A(N); //크기 정해주는게 더 효율적
    vector<int> B(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    while (i < N && j < M) {
        if (A[i] < B[j]) {
            cout << A[i] << " ";
            i++;} //A가 B보다 작으면 먼저 넣기
        else {
            cout << B[j] << " ";
            j++;} //아니면 B넣기
    }

    while (i < N) {
        cout << A[i] << " ";
        i++; //남은 A넣기(둘중하나만 남음)
    }
    while (j < M) { 
        cout << B[j] << " ";
        j++; //남은 B넣기
    }
    //각각의 배열이 정렬되어 있는 상태로 입력 > sort보다 투포인터 방식이 효율적
    return 0;
}