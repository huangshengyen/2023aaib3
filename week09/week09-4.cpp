//week09-4.cpp Leetcode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5 = 0, b10 = 0, b20 = 0;
        for(int b : bills){
            if(b==5) b5++; //客人拿5元，直接收起來
            else if(b==10){ //客人拿10元，看能不能找錢
                if(b5==0) return false; //沒有錢可以找
                b10++; //多了1張10元鈔
                b5--; // 少了1張5元鈔
            }
            else{ //客人拿20元鈔，找他1張10元、1張5元鈔
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }
                else if(b5>=3){
                    b20++;
                    b5-=3;
                }
                else return false;
            }
        }
        return true;
    }
};
