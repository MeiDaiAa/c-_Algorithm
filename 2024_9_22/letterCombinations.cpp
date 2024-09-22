#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

/*
����һ������������ 2-9 ���ַ����������������ܱ�ʾ����ĸ��ϡ��𰸿��԰� ����˳�� ���ء�

�������ֵ���ĸ��ӳ�����£���绰������ͬ����ע�� 1 ����Ӧ�κ���ĸ��
*/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        //�ǻ��ݵ��˳����������� 0 ֱ�ӷ���//��Ϊ��ĿҪ���� "" ʱ���� �� ���� ""
        //���һ��ʼ������ַ��͵��ڿյĻ����ͷ��ؿ�
        if (digits.size() == 0) return {};

        //�ȴ���һ���ַ�������洢ÿ�����ִ�����ַ���
        vector<string>itos = {
            {""},
            {""},
            {"abc"},
            {"def"},
            {"ghi"},
            {"jkl"},
            {"mno"},
            {"pqrs"},
            {"tuv"},
            {"wxyz"}
        };

        vector<string>res;
        string temp;
        //�˳������������ַ�����Ϊ1,���ص�ǰ��������ʾ�������ַ�
        if (digits.size() == 1) {
            for (int i = 0; i < itos[digits.at(0) - '0'].size(); i++) {
                temp = itos[digits.at(0) - '0'].at(i);
                res.push_back(temp);
            }
            return res;
        }
        //����
        for (auto& s : letterCombinations(digits.substr(1, digits.size()))) {
            //��һ�ε������ʱ����len = 2 ��ʱ�� �൱�����ﴫ�������һ�����ֱ�ʾ�ļ����ַ�
            //������Ҫ����һ��������ʾ���ַ��ֱ�ƴ�ӵ������ַ���ǰ��
            //digits.at(0) - '0'��ʾ��ǰ��һ������Ҳ���ǵ�ǰ��Ҫ����������

            //����ÿ��������ַ���ƴ��
            for (int i = 0; i < itos[digits.at(0) - '0'].size(); i++) {
                temp = itos[digits.at(0) - '0'].at(i) + s;

                res.push_back(temp);
            }
        }
        return res;
    }
};