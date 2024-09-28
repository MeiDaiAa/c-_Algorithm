#include <iostream>

using namespace std;

/*
���������ͷ�ڵ� head ��ÿ k ���ڵ�һ����з�ת�����㷵���޸ĺ������

k ��һ��������������ֵС�ڻ��������ĳ��ȡ�����ڵ��������� k ������������ô�뽫���ʣ��Ľڵ㱣��ԭ��˳��

�㲻��ֻ�ǵ����ĸı�ڵ��ڲ���ֵ��������Ҫʵ�ʽ��нڵ㽻����

���룺head = [1,2,3,4,5], k = 2
�����[2,1,4,3,5]
*/


struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //�ݹ���ֹ������ʣ�µĽڵ�����k��������ʣ�µĽڵ�
        if (head == NULL) return NULL;
        if (k == 1) return head;

        //���浱ǰ��ͷ�ڵ㣬Ҳ�Ƿ�ת���β�ڵ�
        ListNode* tail = head;

        for (int i = 0; i < k - 1; i++) {
            head = head->next;
            if (head == NULL) return tail;
        }

        //head����������Ľڵ���Ƿ�ת���ͷ�ڵ㣬����ͷ�ڵ�
        ListNode* newHead = head;
        //������Ҫ��ת��ͷ�ڵ�
        ListNode* swapHead = tail->next;

        //�ݹ�
        tail->next = reverseKGroup(newHead->next, k);

        //����Ҫ��ת��k-1���ڵ���з�ת
        swap(swapHead, k);
        //����ת����ͷ�ڵ㣬Ҳ���Ƿ�ת�������ص�β�ڣ����շ�ת�ĵ����ڶ��ڵ㣩�ӵ��ʼ��ͷ�ڵ㣨Ҳ�����շ�ת��β�ڵ㣩
        swapHead->next = tail;

        return newHead;
    }
private:
    //����ת
    void swap(ListNode* head, int k) {
        if (k == 2) {
        }
        else if (k == 3) {
            head->next->next = head;
        }
        else {
            ListNode* prev = head, * cur = head->next, * next = head->next->next;
            int n = 4;
            while (n <= k) {
                cur->next = prev;

                prev = cur;
                cur = next;
                next = next->next;

                n++;
            }
            cur->next = prev;
        }
        return;
    }
};