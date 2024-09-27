#include <iostream>
#include <string>

using namespace std;

/*
����һ���������������������ڵĽڵ㣬�����ؽ����������ͷ�ڵ㡣������ڲ��޸Ľڵ��ڲ���ֵ���������ɱ��⣨����ֻ�ܽ��нڵ㽻������
���룺head = [1,2,3,4]
�����[2,1,4,3]
*/

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
 class Solution {
 public:
     ListNode* swapPairs(ListNode* head) {
         if (head == NULL) return NULL;
         if (head->next == NULL) return head;

         //ListNode* phead = head->next, *cur = head->next, *prev = phead;
         ListNode* prev = head;
         ListNode* cur = prev->next;
         ListNode* phead = prev->next;
         ListNode* before = NULL;

         while (cur != NULL) {
             ListNode* temp = cur;
             cur = cur->next;

             temp->next = prev;
             prev->next = cur;

             if (before != NULL) {
                 before->next = temp;
             }
             before = prev;

             if (cur == NULL) break;
             cur = cur->next;

             prev = prev->next;

         }
         return phead;
     }
 };

 /*
 class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        //��ֹ�����������headС��2
        if(head == NULL) return NULL;
        if(head->next == NULL)return head;

        //�ص�
        ListNode *newHead = head->next;
        head->next = swapPairs(newHead->next);
        newHead->next = head;
        
        return newHead;
    }
};
 */