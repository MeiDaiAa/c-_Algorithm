#include "lengthOfLongestSubstring.cpp"

using namespace std;
/*
����һ���ַ��� s �������ҳ����в������ظ��ַ��� ��Ӵ��ĳ���
*/

int main(void)
{
	string str = "abcabcbb";

	Solution solution;
	cout << "����ִ�����Ϊ:" << solution.lengthOfLongestSubstring(str) << endl;


	return EXIT_SUCCESS;
}