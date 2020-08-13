//
// Created by 周珊 on 2020/8/13.
//

#pragma clang diagnostic push
#ifndef LEETCODE_62_UNIQUEPATHS_H
#define LEETCODE_62_UNIQUEPATHS_H
#include <vector>
using namespace std;
//动态规划
class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m < 1 || n < 1) return 1;
        vector<int> dp(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[j] += dp[j - 1];
            }
        }
        return dp[n - 1];
    }
};

#endif //LEETCODE_62_UNIQUEPATHS_H

#pragma clang diagnostic pop