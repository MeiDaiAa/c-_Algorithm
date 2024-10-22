#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


/// <summary>
/// �ص�����ֱ���ַ�������
/// </summary>
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n == 1)
            return { "()" };
        // ���ɵ��ַ����ĳ���һ����2n(n���������ţ�
        // ���ɷ����ַ�������
        vector<string> res;
        unordered_map<string, int> hash;

        // ����������n>=2�����
        // ��n = 2 ��ʱ����ʵ���ǽ�һ�����Ų��뵽�������м�����ߵ������
        // ���Ե�n = 3 ��ʱ�򣬾��ǽ�һ�����Ų��뵽n = 2������������ҷ�϶����
        string tmp;
        for (auto& s : generateParenthesis(n - 1)) {
            // ���n = 2 ��ʱs = ��()��
            // ���ǾͿ������һ���ַ�����һ�ԣ�����ԭ�����ַ�������ƴ��
            //2 * (n - 1) Ϊ��ƴ���ַ����ĳ��ȣ�����һ�������ַ����ĳ���
            for (int i = 0; i < 2 * (n - 1); i++) {
                tmp = s.substr(0, i) + "()" + s.substr(i, 2 * (n - 1));
                // ƴ�������Ȼƴ�ӵ�λ�ò�ͬ�������ǵõ���ƴ���ַ������������֮ǰ����ͬ
                // ��ʱ���ǿ�һ����һ����ϣ��֮ǰû�г��ֹ��ַ������뵽��ϣ����
                if (!hash[tmp]) {
                    // ��¼��ǰ���ַ���
                    hash[tmp]++;
                    // ��Ϊû�г��ֹ������Խ���ǰ���ַ��������res��
                    res.emplace_back(tmp);//res.emplace_back(tmp)���res.push_back����
                }
            }
        }
        return res;
    }
};

/// <summary>
/// �����㷨
/// </summary>
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string str = "";
        back(str, n, n);
        return res;
    }
private:
    vector<string>res;
    //������ݺ���, str����ƴ���ַ����� left��right �ֱ𱣴������ź������Ż�ʣ����, len��ʾ��ǰ�ַ����ж೤��������ٲ�ѭ����
    void back(string& str, int left, int right) {
        //�˳������������ŵ���0(�������Ŷ�ƥ��ɹ���
        if (right == 0) {
            res.emplace_back(str);
            return;
        }

        //�������ַ����ڲ���������
        if (left > 0) {
            str.push_back('(');
            back(str, left - 1, right);
            //��һ���������󣬺��������ص������ʱstr�е�ֵΪ��(((��
            str.pop_back();
        }
        if (right > left) {
            str.push_back(')');
            back(str, left, right - 1);
            //�������ʾ��һ��back�Ѿ��˳�����ʱ���������ص����һ�����������ŵ������Ȼ�����һ�������Ÿ�Ϊ������
            str.pop_back();
        }
    }
};