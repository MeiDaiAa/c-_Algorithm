#include <iostream>
#include "addTwoNumbers.cpp"

using namespace std;

/*
 �������� �ǿ� ��������ʾ�����Ǹ�������������ÿλ���ֶ��ǰ��� ���� �ķ�ʽ�洢�ģ�����ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�

���㽫��������ӣ�������ͬ��ʽ����һ����ʾ�͵�����

����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��

*/

//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};


int main(void)
{
	ListNode* phead1 = new ListNode;
	ListNode* node1 = new ListNode(2);
	ListNode* node2 = new ListNode(4);
	ListNode* node3 = new ListNode(3);

	//��������
	phead1->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	//����һ��
	//ListNode* current = phead1->next;
	//while (current != NULL) {
	//	cout << current->val << " ";

	//	current = current->next;
	//}

	ListNode* phead2 = new ListNode;
	ListNode* node21 = new ListNode(5);
	ListNode* node22 = new ListNode(6);
	ListNode* node23 = new ListNode(4);

	//��������
	phead2->next = node21;
	node21->next = node22;
	node22->next = node23;
	node23->next = NULL;

	//ListNode* current = phead2->next;
	//while (current != NULL) {
	//	cout << current->val << " ";

	//	current = current->next;
	//}

	///////////////////����//////////////////

	Solution solution;
	ListNode* test = solution.addTwoNumbers(phead1->next, phead2->next);

	while (test) {
		cout << test->val << " ";
		test = test->next;
	}
		


	return EXIT_SUCCESS;
}