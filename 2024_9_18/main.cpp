#include "convert.cpp"
/*
��һ�������ַ��� s ���ݸ��������� numRows ���Դ������¡������ҽ��� Z �������С�

���������ַ���Ϊ "PAYPALISHIRING" ����Ϊ 3 ʱ���������£�

P   A   H   N
A P L S I I G
Y   I   R

֮����������Ҫ�����������ж�ȡ��������һ���µ��ַ��������磺"PAHNAPLSIIGYIR"��

����ʵ��������ַ�������ָ�������任�ĺ�����

string convert(string s, int numRows);
*/


int main() {
	string str = "PAYPALISHIRING";
	int row = 3;
	Solution solution;
	string newStr = solution.convert(str, row);
	for (auto it = newStr.begin(); it != newStr.end(); it++) {
		cout << *it;
	}
	cout << endl;

	return EXIT_SUCCESS;
}
