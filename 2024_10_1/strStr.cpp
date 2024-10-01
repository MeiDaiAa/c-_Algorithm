#include <iostream>
#include <string>
using namespace std;

/*
���������ַ��� haystack �� needle �������� haystack �ַ������ҳ� needle �ַ����ĵ�һ��ƥ������±꣨�±�� 0 ��ʼ������� needle ���� haystack ��һ���֣��򷵻�  -1 ��

���룺haystack = "sadbutsad", needle = "sad"
�����0
���ͣ�"sad" ���±� 0 �� 6 ��ƥ�䡣
��һ��ƥ������±��� 0 �����Է��� 0 ��
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int cur = 0, next = cur, i = 0;
        while (cur < haystack.size()) {
            if (haystack[cur] == needle[0]) {
                for (i = 0; i < needle.size(); i++) {
                    if ((cur + i) == haystack.size()) return -1;
                    if (haystack[cur + i] != needle[i]) break;
                }
                if (i == needle.size()) return cur;
            }
            cur++;
        }
        return -1;
    }
};