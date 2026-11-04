#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    unordered_map<string, int> total;
    unordered_map<string, vector<pair<int, int>>> m;

    for (int i = 0; i < genres.size(); i++) {
        total[genres[i]] += plays[i];
        m[genres[i]].push_back({plays[i], i});
    }

    vector<pair<int, string>> order;

    for (auto p : total) {
        order.push_back({p.second, p.first});
    }

    sort(order.begin(), order.end(), greater<>());

    vector<int> answer;

    for (auto p : order) {
        string genre = p.second;

        sort(m[genre].begin(), m[genre].end(),
             [](auto a, auto b) {
                 if (a.first == b.first)
                     return a.second < b.second;
                 return a.first > b.first;
             });

        for (int i = 0; i < min(2, (int)m[genre].size()); i++) {
            answer.push_back(m[genre][i].second);
        }
    }

    return answer;
}