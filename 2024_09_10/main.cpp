#include <iostream>
#include "Solution.cpp"
using namespace std;

////////////////��Ŀ����/////////////////
/* 
����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸣������㲻��ʹ��������ͬ��Ԫ�ء�

����԰�����˳�򷵻ش𰸡�
*/

int main()
{
	vector<int>nums = { 2, 7, 11, 5 };
    int traget = 9;

    Solution solution;
    vector<int>ret = solution.twoSum(nums, traget);
    for (int i = 0; i < ret.size(); i++)
    {
        cout << ret.at(i) << " ";
    }
}