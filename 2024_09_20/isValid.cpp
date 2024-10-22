#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        stack<char>stack;
        for (int i = 0; i < len; i++) {
            //���ջΪ�գ���ֱ����ջ
            if (stack.size() == 0) {
                stack.push(s.at(i));
            }
            //���ջ��Ϊ�գ�����ջ��Ԫ�أ��Ƿ��뵱ǰԪ����ͬ��
            //�����ͬ��ջ��Ԫ�س�ջִ����һ��ѭ���������ͬ������ջ
            else {
                char c = stack.top();
                if (c == '{' || c == '[') {
                    if (c == s.at(i) - 2) {
                        stack.pop();
                    }
                    else {
                        stack.push(s.at(i));
                    }
                }
                else {
                    if (c == s.at(i) - 1) {
                        stack.pop();
                    }
                    else {
                        stack.push(s.at(i));
                    }
                }
            }
        }
        if (stack.size() == 0) return true;
        else return false;
    }
};