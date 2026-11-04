#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map <string,int> m;
    for (auto c : clothes) {
        m[c[1]]++;
    }
    int answer = 1;
    for (auto p : m) {
        answer *= (p.second + 1);
    }
    return answer - 1;
}