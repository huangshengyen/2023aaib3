//week09-2.cpp leetcode 1523. Count Odd Numbers in an Interval Range
//找low...high中間，有幾個奇數(頭尾有包含)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;
        if(low%2==1 || high%2==1) ans++;
        return ans;
    }
};
