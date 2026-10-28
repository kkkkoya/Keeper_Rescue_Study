#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    stack<int> s = {};
    vector<int> v(N,0);
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int k;
        cin >> k;
        while(1) {
            if (s.empty()) {
                s.push(k);
                v[i] = 0;
                break;}
            else if (s.top() >= k){
                v[i]=s.size();
                s.push(k);
                break;
            }
            else {
                s.pop();
            }
        }  
    }
    for(int i = 0; i < N; i++) {
        cnt += v[i];
    }
    cout << cnt;
    return 0;
}