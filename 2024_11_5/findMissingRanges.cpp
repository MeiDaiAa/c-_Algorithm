#include <iostream>
#include <vector>

using namespace std;

/*
给你一个闭区间 [lower, upper] 和一个 按从小到大排序 的整数数组 nums ，其中元素的范围在闭区间 [lower, upper] 当中。

如果一个数字 x 在 [lower, upper] 区间内，并且 x 不在 nums 中，则认为 x 缺失。

返回 准确涵盖所有缺失数字 的 最小排序 区间列表。也就是说，nums 的任何元素都不在任何区间内，并且每个缺失的数字都在其中一个区间内。

示例 1：

输入: nums = [0, 1, 3, 50, 75], lower = 0 , upper = 99
输出: [[2,2],[4,49],[51,74],[76,99]]
解释：返回的区间是：
[2,2]
[4,49]
[51,74]
[76,99]
示例 2：

输入： nums = [-1], lower = -1, upper = -1
输出： []
解释： 没有缺失的区间，因为没有缺失的数字
*/

class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>ret;
        if(nums.size() == 0) return {{lower, upper}};

        if(nums[0] > lower) ret.push_back({lower, nums[0] - 1});

        for(int idx = 1; idx < nums.size(); ++idx){
            if(nums[idx] != nums[idx - 1] + 1){
                ret.push_back({nums[idx - 1] + 1, nums[idx] - 1});
            }
        }

        if(nums.back() < upper) ret.push_back({nums.back() + 1, upper});

        return ret;
    }
};