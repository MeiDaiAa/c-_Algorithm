#include <iostream>
#include <vector>
using namespace std;
/*
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��



ʾ�� 1:

����: nums = [1,3,5,6], target = 5
���: 2
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L = 0, R = nums.size() - 1, mid = 0;
        while (L <= R) {
            mid = (L + R) >> 1;
            if (nums[mid] < target) L = mid + 1;
            else R = mid - 1;
        }
        return L;
    }
};