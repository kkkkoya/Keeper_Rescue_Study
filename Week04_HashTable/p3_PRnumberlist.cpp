#include <bits/stdc++.h>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> s(phone_book.begin(),phone_book.end());
    for (string num : phone_book){
        for (int i = 1; i < num.size(); i++) {
            if(s.find(num.substr(0,i)) != s.end()) return false;
        }
    }

    return true;
}