#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        if (!s.size()) { return 0; }
        int idx = 0;
        long long ret = 0;
        bool flag;
        //�ȹ��˵�ǰ���ո�
        while (s.at(idx) == ' '&& idx < s.size()) {
            idx++;
            if (idx == s.size()) { return 0; }
        }

        flag = true;//Ĭ��Ϊ��
        //Ȼ���Ƿ��������� , ����ֻ��ҪҲֻ���ж�һ��
        if (s.at(idx) == '+') {
            idx++;
            if (idx == s.size()) { return 0; }
        }
        else if (s.at(idx) == '-') {
            flag = false;
            idx++;
            if (idx == s.size()) { return 0; }
        }

        //ȥ������ǰ�����
        while (s.at(idx) == '0') {
            idx++;
            if (idx == s.size()) { return 0; }
        }


        //����ж��Ƿ�Ϊ���֣��Ǿͼ��������Ǿͷ���
        while (idx < s.size()) {
            if (s.at(idx) >= '0' && s.at(idx) <= '9') {
                ret = ret * 10 + (s.at(idx) - '0');
                if (ret > 2147483647 && flag == true) {
                    return 2147483647;
                }
                if (ret > 2147483648 && flag == false) {
                    return -2147483648;
                }
                idx++;
            }
            else {
                break;
            }
        }

        return flag == true ? ret : -ret;
    }
};



/////////////////////ԭ��������ύ����//////////////////


//class Solution {
//public:
//    int myAtoi(string s) {
//        int idx = 0, isPlus = 1, ret = 0;
// 
//        //�ص�һλ��ʼ���ж��ַ�����ֱ��idx���������˳�ѭ��
//        while (idx < s.size()) {
//            //�鿴�ַ�������һλ�Ƿ�Ϊ�ո�
//            if (s.at(idx) == ' ') {
//                //����ǿո񣬾�������һλ
//                idx++;
//            }
//            //�����һλ���ǿո񣬿��ǲ��Ǹ���
//            else if (s.at(idx) == '-') {
//                isPlus = 0;
//                idx++;
//            }
//            //�鿴��һλ�ǲ������ֻ�0����������֣�ֱ���˳�ѭ��������һ�׶�
//            //else if (s.at(idx) - '0' >= 0 || s.at(idx) - '0' <= 9) {
//            else if (s.at(idx) >= '0' && s.at(idx) <= '9') {
//                break;
//            }
//            //�����һλʲô�����ǣ�ֱ�ӷ���
//            else { return ret; }
//        }
//        
//        //�����￪ʼ��idx��ָ�����ַ����еĵ�һ������
//        //��ʼ�����ȡ���֣���������������ֵ��ַ�����ֱ���˳�
//
//        //����ȡ���ַ��������µ��ַ�����
//        string tempStr = "";
//        while (idx < s.size()) {
//            //if ((s.at(idx) - '0') >= '0' || (s.at(idx) - '0') <= '9') {
//            if ((s.at(idx) >= '0' && s.at(idx) <= '9')) {
//
//                tempStr.push_back(s.at(idx++));
//            }
//            else {
//                break;
//            }
//        }
//
//        //�ж��ַ����е����ִ�С
//        if (tempStr.size() > 10) {
//            if (isPlus) {
//                return 2147483647;
//            }
//            else {
//                return -2147483648;
//            }
//        }
//
//        //����ȡ�����ַ���ת��Ϊ����
//        int multRet = 1;
//        for (int i = tempStr.size() - 1; i >= 0; i--) {
//            ret += (tempStr.at(i) - '0') * multRet;
//            multRet *= 10;
//        }
//
//        return isPlus ? ret : -ret;
//    }
//};