//week03-5a.cpp
//leetcode 459. Repeated Substring Pattern
class Solution {
public:
    // abcabcabc
    // abcabcabcabcabcabc
    //  bcabcabcabcabcab �䦳�S�� abcabcabc
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        int N = s2.length();
        return s2.substr(1, N-2).find(s) != string::npos;
    }   //substr() ���r�� ��1 �k��1(���ӬO0...N-1 �{�b�ܦ�1...N-2)
};
