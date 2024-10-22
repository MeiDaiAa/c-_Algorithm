#include <iostream>
using namespace std;



struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //ȡ�� l1 �� l2 �ڵ��м������
    ListNode* L1 = l1;
    ListNode* L2 = l2;

    //���������ڵ���ӵı��� add
    int add = 0;
    //���ý�λ�� nextAdd
    int nextAdd = 0;
    //���췵�ص�����
    ListNode* rHead = new ListNode;
    //���������ϵ�ָ����׷�ӷ��������������ֵ
    ListNode* ret = rHead;


    //�����������в�Ϊ�������ʱ�����������л�������û�м��꣩
    while (L1 || L2) {

        //���ܹ��ж������������ֵ�ʱ���� add �� �����б������ֵ���
        //��Ϊ�������Ϊ�յ������ ʹ��-> �����˿�
        //���ֱ���ж������Ƿ����Ȼ��ֱ��ʹ���ڲ���val�����
        if (L1) {
            add += L1->val;
            //ָ�����
            L1 = L1->next;
        }
        if (L2) {
            add += L2->val;
            //ָ�����
            L2 = L2->next;
        }
        //�������е�����Ӻ󣬿��Ƿ��н�λ���н�λ�Ļ������λ���
        add += nextAdd;

        //��Ӻ󴴽��ڵ㣬�����ڷ���������
        ListNode* addNode = new ListNode(add % 10);
        //�������Ľڵ���뷵������
        ret->next = addNode;
        //�ƶ���
        ret = addNode;
        //�鿴�Ƿ��н�λ������б����λ�� nextAdd��
        nextAdd = add / 10;
        //������������ӵĽ��������һ�����¿�ʼ���
        add = 0;
    }

    //�������������Ƿ��н�λ
    if (nextAdd != 0)
    {
        //��Ӻ󴴽��ڵ㣬�����ڷ���������
        ListNode* addNode = new ListNode(nextAdd);
        //�������Ľڵ���뷵������
        ret->next = addNode;
        //�ƶ���
        ret = addNode;
    }

    ret->next = NULL;
    return rHead->next;
}
};