#include <iostream>
#include <string>

using namespace std;

class Solution {

public:
    string convert(string s, int numRows) {
        //��¼һ����ÿһ����ĸ����һ����ĸ�ж�Զ
        int pain = numRows + (numRows - 1) - 1;
        int len = s.size();
        string ret;
        if (numRows == 1 || numRows >= s.size()) return s;
        else if (numRows == 0 || s.size() == 0) return "";

        //�ж����о�ѭ������
        int time = 0;
        int idx;
        int mult = 0;
        while (time < numRows) {
            //��λ���±�
            idx = time + (pain * mult);
            //������м伸����Ҫ��ǰ�ƶ��ľ���
            int need = time * 2;
            //�����ǰ�ƶ��ľ����Ƿ�Խ��
            //�ж��±���û��Խ��
            if (idx - need >= len) {
                //���Խ���ˣ���ôidxҲ�϶�Խ���ˣ�ֱ��������һ��
                time++;
                //���þ���
                mult = 0;
                continue;
            }
            //������м�ļ��о�Ҫ������������
            if (time != 0 && time != (numRows - 1) && idx >= numRows) {
                //�Ȱ�ǰ�����ĸ����ret��
                ret.push_back(s.at(idx - need));
            }
            //�ж��±���û��Խ��
            if (idx >= len) {
                time++;
                mult = 0;
                continue;
            }
            //����±�û��Խ�磬�Ͱѵ�ǰ��ĸ�Ƶ�ret��
            ret.push_back(s.at(idx));
            mult++;
        }
        return ret;
    }
};