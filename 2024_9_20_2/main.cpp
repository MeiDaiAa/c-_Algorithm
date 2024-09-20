#include "mergeTwoLists.cpp"

/*
��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
*/

int main() {
	ListNode* L1 = new ListNode(1);
	ListNode* N1 = new ListNode(2);
	ListNode* N2 = new ListNode(4);

	L1->next = N1;
	N1->next = N2;

	ListNode* L2 = new ListNode(1);
	ListNode* N3 = new ListNode(3);
	ListNode* N4 = new ListNode(4);

	L2->next = N3;
	N3->next = N4;

	Solution solution;
	ListNode* ret = solution.mergeTwoLists(L1, L2);
	ListNode* cur = ret;
	while (cur != NULL) {
		cout << cur->val << " ";
		cur = cur->next;
	}

	return EXIT_SUCCESS;
}