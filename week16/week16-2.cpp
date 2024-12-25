//week16-2.cpp leetcode 50. Pow(x, n) 利用函式呼叫函式
class Solution { //這種寫法錯誤，因為n太大
public:
    double myPow(double x,long long int n) {
        if(n==0) return 1;
        if(n<0){ //如果遇到負的 n ，那就負負得正，同時把 x 變成分母
            n = -n;
            x = 1/x; // 因為 x 的 -1 次方，式1/x
        }
        if(n%2==0){
            double now = myPow(x, n/2); //一半的x相乘
            return now * now; //左一半，右一半，在相乘
        }
        else{ //奇數個相乘
            double now = myPow(x, n/2);
            return now * now * x;
        }
    }
};
