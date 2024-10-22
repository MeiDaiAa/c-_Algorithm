#include <iostream>
#include <vector>
using namespace std;

/*
����һ������Ϊ n ���������� height ���� n �����ߣ��� i ���ߵ������˵��� (i, 0) �� (i, height[i]) ��

�ҳ����е������ߣ�ʹ�������� x �Ṳͬ���ɵ�����������������ˮ��

�����������Դ�������ˮ����

˵�����㲻����б������

���룺[1,8,6,2,5,4,8,3,7]
�����49
���ͣ�ͼ�д�ֱ�ߴ����������� [1,8,6,2,5,4,8,3,7]���ڴ�����£������ܹ�����ˮ����ʾΪ��ɫ���֣������ֵΪ 49��
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        //��������ָ��ֱ�ָ�����������
        int L = 0, R = n - 1;

        int len = R - L, max = 0, area = 0;
        //ָ�����м��ƶ�
        while (L < R) {
            //���������ָ���ܹ����浽��ˮ
            area = len * min(height.at(L), height.at(R));

            //����浽��ˮ��������ܴ浽��ˮ���͸���
            max = area > max ? area : max;

            //ָ��ָ���ǽ�߶ȸ�С�ĸ����±�
            if (height.at(L) < height.at(R)) {
                L++;
                len--;
                continue;
            }
            else {
                R--;
                len--;
                continue;
            }
        }
        return max;
    }
};