#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*////����˼·

����֮�� ö��һ����֮���ڽ���˫ָ������㷨

*/



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        int len = nums.size();
        //��Ŀ�������������
        sort(nums.begin(), nums.end());
        //������ָ���±����ָ���±�
        int L, R;
        //����һ��ָ���¼ö������֮ǰ���±�
        int perid = -1;
        for (int i = 0; i < len; ++i) {
            //�����ǰö���±��ֵ���¼��֮ǰ���±��ֵ��ͬ�� 
                //��ʱ�п��ܻ������ͬ�����飬������������Ѿ����ǹ��ˣ�Ӧ������
            if (perid != -1 && (nums[i] == nums[perid]))
                continue;
            L = i + 1;
            R = len - 1;
            while (L < R) {
                int sum = nums[i] + nums[L] + nums[R];
                if (sum == 0) {
                    ret.push_back({ nums[i], nums[L], nums[R] });
                    //�ҵ�һ��Ŀ�����ָ�������л����ݣ� ����л�����ָ��ָ���ֵ���л�֮ǰ��ͬ�Ļ���
                      //�������ͬ�����飬����Ӧ���Ƶ�ֻ����֮ǰ��ͬ��ֵ��λ����
                    //��¼��ǰ����ָ��
                    int temp = L;
                    //�����ָ�����¼ǰָ���ֵ��ͬ����L++
                    while (L < R && (nums[L] == nums[temp]))
                        L++;
                }
                else if (sum < 0) {
                    L++;
                }
                else if (sum > 0) {
                    R--;
                }
            }
            //��¼��һѭ����i�������һѭ��ָ���ֵ�뵱ǰ��ͬ����ֱ���ٽ�����һ��ѭ��
            perid = i;
        }

        return ret;
    }
};