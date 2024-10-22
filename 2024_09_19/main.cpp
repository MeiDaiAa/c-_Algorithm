#include "threeSum.cpp"

/*
����һ���������� nums ���ж��Ƿ������Ԫ�� [nums[i], nums[j], nums[k]] ���� i != j��i != k �� j != k ��ͬʱ������ nums[i] + nums[j] + nums[k] == 0 �����㷵�����к�Ϊ 0 �Ҳ��ظ�����Ԫ�顣

ע�⣺���в����԰����ظ�����Ԫ�顣

ʾ�� 1��

���룺nums = [-1,0,1,2,-1,-4]
�����[[-1,-1,2],[-1,0,1]]
���ͣ�
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0 ��
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0 ��
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0 ��
��ͬ����Ԫ���� [-1,0,1] �� [-1,-1,2] ��
ע�⣬�����˳�����Ԫ���˳�򲢲���Ҫ��
*/

int main() {
	vector<int> num = { -1, 0, 1, 2, -1, -4 };

	Solution solution;
	vector<vector<int>> ret = solution.threeSum(num);
	for (auto it = ret.begin(); it != ret.end(); it++) {
		for (auto ite = (*it).begin(); ite != (*it).end(); ite++) {
			cout << (*ite) << " ";
		}
		cout << endl;
	}


	return EXIT_SUCCESS;
}