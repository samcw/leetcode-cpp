//
// Created by 周珊 on 2020/8/6.
//

#ifndef LEETCODE_121_MAXPROFIT_H
#define LEETCODE_121_MAXPROFIT_H

#include <vector>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;
        int pre = 0;
        int min = prices[0];

        for(int i = 1; i < prices.size(); ++i) {
            min = min < prices[i] ? min : prices[i];
            pre = pre > prices[i] - min ? pre : prices[i] - min;
        }
        return pre;
    }
};

#endif //LEETCODE_121_MAXPROFIT_H
