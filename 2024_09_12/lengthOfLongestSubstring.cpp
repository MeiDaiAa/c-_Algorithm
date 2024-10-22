#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //����ַ����ĳ���С��2�Ļ���ֱ�ӷ��ص�ǰ����
        if (s.length() < 2) { return s.length();}
        //������ڵ��ҽڵ㣬 ����Ŀ��������������ͼ���������ڵ㵽�ҽڵ�ļ�¼����
        int L = 0, R = 1, ret = 1, cur = 1;

        //���ҽڵ�û���ߵ��ַ���ĩβ��ʱ��
        while (R < s.length()) {
            //����ڵ㿪ʼ���ҽڵ�֮ǰ���ж��Ƿ����ַ����ҽڵ���ͬ
            for (int i = L; i < R; i++) {
                //����нڵ����ҽڵ���ͬ��ô�ͽ���ڵ��Ƶ���ͬ�Ľڵ�֮������������ͬ���ַ��ͻ���һ�����ҽڵ���ַ�
                if (s.at(i) == s.at(R)) {
                    L = i + 1;
                    //���¼�����
                    cur = R - L;
                    cout << "��ǰ��curΪ:" << cur << endl;
                    break;
                }
            }

            //������ҽڵ�֮ǰû�����ҽڵ���ͬ���ַ�������ô�͸��¼������ĳ���
            cur++;
            //������������ȴ����������ô�͸�ֵ
            if (cur > ret) { ret = cur ;}
            //�ҽڵ�����
            R++;
        }
        return ret;
    }
};