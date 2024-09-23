#include <iostream>

using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 class Solution {
 public:
     ListNode* removeNthFromEnd(ListNode* head, int n) {
         int pos = 0;
         //�������ҽڵ㣬�����������ڵ�ļ��ֵ����n
         struct ListNode* L = head;
         struct ListNode* R = head;
         while (R->next != NULL) {
             //�����������ڵ�ļ��ֵ����n
             if (pos < n) {
                 pos++;
                 R = R->next;
                 if (R == NULL) return NULL;
             }
             else {
                 //���ڵ�ļ��ֵ��Ⱥ󣬽ڵ�ƽ�Ƶ������ĩβ
                 L = L->next;
                 R = R->next;
             }
         }
         //�����posС��n���������ʵ��ʾ����Ҫɾ���Ľڵ��������ߵĽڵ㣬����ֱ��ɾ�����ؾ���
         if (pos < n) {
             //��һ������˼�ǣ�����ҽڵ��Ƶ�����󣬵��ǳ��Ȼ��ǲ�����
             //���Ǿ�����ڵ�ǰ���ӽڵ����ý�����L->next = L->next->next ������������
             // for(int i = 0; i < n - pos; i++){
             //     struct ListNode *temp = new ListNode(0);
             //     temp->next = L;
             //     L = temp;
             //     head = head->next;
             // }
             L = L->next;
             return L;
         }
         L->next = L->next->next;
         return head;
     }
 };