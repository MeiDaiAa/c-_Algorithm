#include <iostream>
#include <vector>

using namespace std;

/*
����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�ء�Ԫ�ص�˳����ܷ����ı䡣Ȼ�󷵻� nums ���� val ��ͬ��Ԫ�ص�������

���� nums �в����� val ��Ԫ������Ϊ k��Ҫͨ�����⣬����Ҫִ�����²�����

���� nums ���飬ʹ nums ��ǰ k ��Ԫ�ذ��������� val ��Ԫ�ء�nums ������Ԫ�غ� nums �Ĵ�С������Ҫ��
���� k��
���룺nums = [3,2,2,3], val = 3
�����2, nums = [2,2,_,_]
���ͣ���ĺ�������Ӧ�÷��� k = 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2��
���ڷ��ص� k ��Ԫ��֮��������ʲô������Ҫ��������ǲ����������⣩��
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 1) return nums[0] == val ? 0 : 1;
        int L = 0, R = 0, temp;
        while (R < nums.size()) {
            if (nums[R] == val) R++;
            else if (nums[L] == val && nums[R] != val) {
                temp = nums[L];
                nums[L++] = nums[R];
                nums[R] = temp;
            }
            else {
                L++;
                R++;
            }
        }
        return L;
    }
};