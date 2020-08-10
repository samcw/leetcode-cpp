//
// Created by 周珊 on 2020/8/10.
//

#ifndef LEETCODE_96_NUMTREES_H
#define LEETCODE_96_NUMTREES_H
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        if (n == 0) return 0;
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            int temp = floor(i / 2.0);
            int sum = 0;
            // if (i % 2) {
            for (int j = 0; j <= temp; j++) {
                if (j != temp) {
                    sum += dp[i - 1 - j] * dp[j - 0] * 2;
                } else if (j == temp && i % 2) {
                    sum += dp[i - 1 - j] * dp[i - 1 - j];
                }
            }
            // }
            dp[i] = sum;
        }
        return dp[n];
    }
};

#endif //LEETCODE_96_NUMTREES_H
