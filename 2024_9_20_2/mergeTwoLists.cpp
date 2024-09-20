#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//		ListNode* ret = new ListNode();
//		ListNode* rHead = ret;
//		//����������Ӧ���������ָ��
//		//����ָ��ֱ�ָ�������������ͬλ��
//		ListNode* cur1 = list1;
//		ListNode* cur2 = list2;
//		
//		//���������������ݵ�ʱ��һֱѭ��
//		while (cur1 != NULL && cur2 != NULL) {
//			//������ָ��ָ���ֵ�ó����Աȣ�С���������++������һ��ѭ��
//			if (cur1->val < cur2->val) {
//				ListNode* temp = new ListNode(cur1->val);
//				ret->next = temp;
//				ret = ret->next;
//				cur1 = cur1->next;
//			}
//			else {
//				ListNode* temp = new ListNode(cur2->val);
//				ret->next = temp;
//				ret = ret->next;
//				cur2 = cur2->next;
//			}
//		}
//		//����ѭ����ʾ��������������һ�������Ѿ����ˣ�ֻ��Ҫ����Ϊ�յ�����ȫ������ret����
//		if (cur1 != NULL) ret->next = cur1;
//		else if (cur2 != NULL) ret->next = cur2;
//
//		return rHead->next;
//	}
//};

/// <summary>
/// ///////////////////////�����Ƚ�list1ȫ�����뵽ret�У�Ȼ��lest2��ret�е�ÿ��Ԫ�ضԱ�
/// </summary>

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode* ret = new ListNode();
		ListNode* rHead = ret;

		ListNode* cur1 = list1;
		ListNode* cur2 = list2;
		//��list1ȫ�����뵽ret��
		while (cur1 != NULL) {
			ListNode* temp = new ListNode(cur1->val);
			ret->next = temp;
			ret = ret->next;
			cur1 = cur1->next;
		}

		//�������ֱ���޸���list1��
		//��list1ȫ�����뵽ret��
		//ret->next = cur1;

		//����ʱ�临�ӶȾͿ��Դ�O(M + N)���O(N)


		//��ret��ָ��ĵ�ͷ��
		cur1 = rHead->next;
		ListNode *pre = rHead;
		//��list2�н�С��Ԫ�ز��뵽ret��Ӧλ�õ�ǰ�棬 ���ret�ߵ�����󣬱�ʾret���Ѿ�û�б�list2�и�����ˣ�ֱ�ӽ�list2����ƴ�Ӽ���
		while (cur1 != NULL) {
			//���cur2 == NULL����ʾcur2
			if (cur2 == NULL) return rHead->next;
			//���cur2С��cur1 �ͽ�cur2���뵽cur1ǰ��
			if (cur2->val < cur1->val) {
				ListNode* temp = new ListNode(cur2->val);
				pre->next = temp;
				pre = pre->next;
				temp->next = cur1;
				//cur2����
				cur2 = cur2->next;
				continue;
			}
			//cur1��Ԫ��С��cur1����
			pre = cur1;
			cur1 = cur1->next;
		}
		//��cur2ֱ��ƴ�ӵ�����
		pre->next = cur2;

		return rHead->next;
	}
};