#include "isPalindrome.cpp"

using namespace std;

/*
����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��

������
��ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

���磬121 �ǻ��ģ��� 123 ���ǡ�
*/

int main() {
	int a = 10;
	Solution solution;

	if (solution.isPalindrome(a)) {
		cout << "�ǻ�����" << endl;
	}
	else {
		cout << "���ǻ�����" << endl;
	}

	return EXIT_SUCCESS;
}