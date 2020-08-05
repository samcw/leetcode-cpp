#include <iostream>
#include "53-maxSubArray.h"
#include <vector>

using namespace std;

int main() {
    vector<int> test{-2,1,-3,4,-1,2,1,-5,4};
    Solution solution;
    int res = solution.maxSubArray(test);
    cout << res << endl;
    return 0;
}
