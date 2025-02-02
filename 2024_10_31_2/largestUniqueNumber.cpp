#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
给你一个整数数组 A，请找出并返回在该数组中仅出现一次的最大整数。

如果不存在这个只出现一次的整数，则返回 -1。

示例 1：

输入：[5,7,3,9,4,9,8,3,1]
输出：8
解释： 
数组中最大的整数是 9，但它在数组中重复出现了。而第二大的整数是 8，它只出现了一次，所以答案是 8。
示例 2：

输入：[9,9,8,8]
输出：-1
解释： 
数组中不存在仅出现一次的整数。
*/
class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int, int>hash;
        for(auto& i : nums){
            ++hash[i];
        }
        int temp = -1;
        for(auto&pair : hash){
            if(pair.second == 1) temp = max(temp, pair.first);
        }
        return temp;
    }
    //优化
    int largestUniqueNumber2(vector<int>& nums) {
        int hash[1001] = {0};

        for(auto& i : nums) ++hash[i];

        for(int i = 1000; i > 0; --i) if(hash[i] == 1) {
            return i;
        }
        return -1;
    }
};  