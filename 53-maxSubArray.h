//
// Created by 周珊 on 2020/8/4.
//

#ifndef LEETCODE_53_MAXSUBARRAY_H
#define LEETCODE_53_MAXSUBARRAY_H
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = 0, maxAns = nums[0];
        for (const auto &x: nums) {
            pre = max(pre + x, x);
            maxAns = max(maxAns, pre);
        }
        return maxAns;
    }
};

#endif //LEETCODE_53_MAXSUBARRAY_H
