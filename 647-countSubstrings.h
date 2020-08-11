//
// Created by 周珊 on 2020/8/12.
//

#ifndef LEETCODE_647_COUNTSUBSTRINGS_H
#define LEETCODE_647_COUNTSUBSTRINGS_H
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        auto size = s.size();
        vector<vector<bool>> dp(size, vector<bool>(size));
        int res = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = i; j >= 0; --j) {
                if (j >= i - 1) {
                    dp[i][j] = s[i] == s[j];
                }
                else {
                    dp[i][j] = (dp[i - 1][j + 1] && (s[i] == s[j]));
                }
                res = dp[i][j] ? res + 1 : res;
            }
        }
        return res;
    }
};

#endif //LEETCODE_647_COUNTSUBSTRINGS_H
