//week09-4.cpp Leetcode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5 = 0, b10 = 0, b20 = 0;
        for(int b : bills){
            if(b==5) b5++; //�ȤH��5���A�������_��
            else if(b==10){ //�ȤH��10���A�ݯण����
                if(b5==0) return false; //�S�����i�H��
                b10++; //�h�F1�i10���r
                b5--; // �֤F1�i5���r
            }
            else{ //�ȤH��20���r�A��L1�i10���B1�i5���r
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
