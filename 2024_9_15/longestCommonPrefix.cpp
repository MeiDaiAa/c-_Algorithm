#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) { return ""; }
        if (strs.size() == 1 ) { return strs.at(0); }

        string ret = "";

        //����ַ�����������̵��ַ����ĳ���
        int l = strs.at(0).size();
        for (vector<string>::iterator it = strs.begin() + 1; it < strs.end(); it++) {
            l = l < (*it).size() ? l : (*it).size();
        }//�����̳���Ϊ0��ֱ�ӷ���
        if (l == 0) { return ""; }

        //����ָ���ַ������±�
        int idx = 0;
        //�����ڼ����ַ������±�
        while (idx < l) {
            //��c���ڵ�һ���ַ���������±�
            char c = strs.at(0).at(idx);
            //�������������ַ�����ͬһ���±꣬�鿴�Ƿ����
            for (int i = 1; i < strs.size(); i++) {
                //�������ȣ���ֱ�ӷ���
                if (c != strs.at(i).at(idx)) { return ret; }
            }
            //�����ȣ� �ͽ����һ���ַ����뵽ret��
            ret.push_back(c);
            //idx++ ����ִ����һ���ж�
            idx++;
        }
        return ret;
    }
};