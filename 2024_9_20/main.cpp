#include "isValid.cpp"

/*
����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��

��Ч�ַ��������㣺

�����ű�������ͬ���͵������űպϡ�
�����ű�������ȷ��˳��պϡ�
ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�

ʾ�� 1��

���룺s = "()"

�����true
*/

int main() {
	string str = "([])";

	Solution solution;
	if (solution.isValid(str)) {
		cout << "����Ч������" << endl;
	}
	else {
		cout << "������Ч������" << endl;
	}
	return EXIT_SUCCESS;
}