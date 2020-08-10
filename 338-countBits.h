//
// Created by 周珊 on 2020/8/10.
//

#ifndef LEETCODE_338_COUNTBITS_H
#define LEETCODE_338_COUNTBITS_H
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        //奇数一定相比于前面的偶数多一个1,偶数跟除2之后的偶数的1数量一样多
        vector<int> result(num+1);
        result[0] = 0;
        for(int i = 1; i <= num; i++)
        {
            if(i % 2 == 1)
            {
                result[i] = result[i-1] + 1;
            }
            else
            {
                result[i] = result[i/2];
            }
        }

        return result;
    }
};

#endif //LEETCODE_338_COUNTBITS_H
