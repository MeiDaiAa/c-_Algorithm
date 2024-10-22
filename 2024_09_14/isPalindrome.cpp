#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { return false; }
        //�����ִ��뵽�ַ�����
        string str;
        //�����������������ں����޸�
        int num = x;

        //�� num ��Ϊ 0 ��ʱ��һֱִ��ѭ��
        while (num != 0) {
            //�� num �����һλ�����뵽�ַ�����
            str.push_back(num % 10 + '0');
            //num = num - num % 10;
            //ֱ�� /10 ���Ա���ɾ�� num �����һλ
            num /= 10;
        }
        
        //��������������ָ���ַ��������������˵�
        int L = 0, R = str.size() - 1;
        while (L <= R) {
            //�����˵�����������Ҷ˵��������ֱ�ӷ��� false
            if (str.at(L) != str.at(R)) { return false; }

            //�����˵����ڿ�
            L++;
            R--;
        }
        //�������ȣ��ͷ��� true
        return true;
    }
};