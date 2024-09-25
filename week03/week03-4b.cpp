//week03-4b.cpp
//leetcode 28. Find the Index of the First Occurrence in a String
// 在 C++ 也是一行，haystack.find(needle)，在字串a 裡找到 字串b
class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};
