#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x == -2147483648)return 0;
        int num = x;
        //��¼�������������
        bool isPlus = true;
        //���Ϊ������תΪ����//���������-2147483648 ����ת���� 2147483648
        if (x < 0) {
            num = -num;
            isPlus = false;
        }
        //���һ���������10λ��
        int nums[10] = { 0 };
        //��¼�±�
        int idx = 0;
        //��¼�����ĳ���//ret���ɱ�ʾ
        //int sum = 1;
        //�������������������
        while (num / 10 != 0) {
            nums[idx++] = num % 10;
            num /= 10;
            //sum++;
        }
        nums[idx] = num;

        long ret = 0;
        long mult = 1;
        //��������ַ�����ret��
        for (int i = idx; i >= 0; i--) {
            ret += nums[i] * mult;
            mult *= 10;
            if (ret > 2147483647) {
                return 0;
            }
        }
        return isPlus == true ? ret : -ret;
    }
};