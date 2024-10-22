#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string ret;
        int len = s.size();

        //����һ����λ��bool���飬���洢��ڵ㵽�ҽڵ���һ�����ַ����Ƿ�Ϊ���Ĵ��� �ȳ�ʼ��Ϊfalse
        vector<vector<bool>>flag(len, vector<bool>(len, false));
        //����
        //for (auto it = flag.begin(); it != flag.end(); it++) {
        //    for (auto ite = (*it).begin(); ite != (*it).end(); ite++) {
        //        cout << (*ite) << " ";
        //    }
        //    cout << endl;
        //}
        //�����ִ�����ڵ�͵�ǰ���ַ����ĳ���
        int L = 0, sum = 1;
        //����Ϊ1�����ַ����ַ����϶�Ϊ���Ĵ������԰Ѹ������bool�����Ϊtrue
        for (int i = 0; i < len; i++) {
            flag[i][i] = true;
        }
        //��ʼö�����ַ���
        //���ѭ��������ַ����ĳ���
        //�ڲ�ѭ��Ӧ�����ַ��������±�
        //����������ȷö��

        //���ȴ�2��ʼ�ж�
        for (int n = 2; n <= len; n++) {
            //���������࿪ʼ���������Ҳ�
            for (int left = 0; left < len; left++) {
                //�ȼ����������
                int right = left + n - 1;
                //����ҽڵ㳬������ô����ֱ��������ǰѭ���������ǽ��ҽڵ��Ϊĩβ����Ϊ��������Ѿ��жϹ���
                if (right >= len) break;
                //�������ڵ㲻�����ҽڵ㣬 ��ô��Ȼ���ǻ��Ĵ���ֱ������
                if (s.at(left) != s.at(right)) continue;
                //�����ȥ���ڵ���м��ַ������ǻ��Ĵ�����ôҲ�ض����ǻ��Ĵ� 
                //flag[i + 1][j - 1]�����i= 0j = 0 ��ʱ��ȡ��flag�ᵼ�����ݷ���Խ�磬����Ҫ���ж�����
                if ((n > 2) && flag[left + 1][right - 1] == false) continue;

                //����һ������ʾ�ַ������±�i��j��һ�����Ĵ�
                // ��¼�û��Ĵ���bool������
                flag[left][right] = true;

                ////�����һ�����Ĵ��ĳ��ȴ��ڼ�¼�Ļ��Ĵ��� ��ô�͸��·��ػ��Ĵ�
                //if (n > sum) {
                //    L = left;
                //    sum = n;
                //}

                //�����������ж��ĳ�����Խ��Խ��ģ��������������ж����ַ���һ���Ǵ��ڵ�����ô����¼���ַ�����
                //�������ǿ���ֱ�Ӹ��·��صĲ���
                L = left;
                sum = n;
            }
        }
        return s.substr(L, sum);
    }
};