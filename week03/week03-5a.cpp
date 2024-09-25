//week03-5a.cpp
//leetcode 459. Repeated Substring Pattern
class Solution {
public:
    // abcabcabc
    // abcabcabcabcabcabc
    //  bcabcabcabcabcab 找有沒有 abcabcabc
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        int N = s2.length();
        return s2.substr(1, N-2).find(s) != string::npos;
    }   //substr() 切字串 左1 右扣1(本來是0...N-1 現在變成1...N-2)
};
