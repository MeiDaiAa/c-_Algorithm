#include "longestPalindrome.cpp"

/*
����һ���ַ��� s���ҵ� s ����Ļ����Ӵ���
*/
int main() {
	string str = "cbcbc";
	Solution solution;
	string ret = solution.longestPalindrome(str);
	for (int i = 0; i < ret.size(); i++) {
		cout << ret.at(i);
	}
	cout << endl;
	return EXIT_SUCCESS;
}