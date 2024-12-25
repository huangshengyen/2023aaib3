//week16-1b.cpp leetcode 50. Pow(x, n)
class Solution { //這種寫法錯誤，因為n太大
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n>0){ //用瘋狂程設的寫法，但是 n<0 會失敗
            for(int i=0; i<n; i++){
                ans *= x;
            }
        }
        else if(n<0){ //特別針對 n<0 用負負得正，換成倒過來的形式
            for(int i=0; i<-n; i++){
                ans *= 1/x;
            }
        }
        return ans;
    }
};
