#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> gems) {
    set<string> s(gems.begin(), gems.end());
    unordered_map<string, int> m;

    int n = gems.size();
    int kind = s.size();

    int left = 0;
    int right = 0;

    int minLen = n + 1;
    vector<int> answer(2);

    while (right < n) {
        m[gems[right]]++;
        right++;

        while (m.size() == kind) {
            if (right - left < minLen) {
                minLen = right - left;
                answer = {left + 1, right};
            }

            m[gems[left]]--;

            if (m[gems[left]] == 0) {
                m.erase(gems[left]);
            }

            left++;
        }
    }

    return answer;
}