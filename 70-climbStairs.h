//
// Created by 周珊 on 2020/8/7.
//

#ifndef LEETCODE_70_CLIMBSTAIRS_H
#define LEETCODE_70_CLIMBSTAIRS_H

class Solution {
public:
    int climbStairs(int n) {
        int pre1 = 1, pre2 = 1;
        for (int index = 2; index <= n; ++index) {
            pre2 = pre2 + pre1;
            pre1 = pre2 - pre1;
        }
        return pre2;
    }
};

#endif //LEETCODE_70_CLIMBSTAIRS_H
