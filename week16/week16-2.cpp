//week16-2.cpp leetcode 50. Pow(x, n) �Q�Ψ禡�I�s�禡
class Solution { //�o�ؼg�k���~�A�]��n�Ӥj
public:
    double myPow(double x,long long int n) {
        if(n==0) return 1;
        if(n<0){ //�p�G�J��t�� n �A���N�t�t�o���A�P�ɧ� x �ܦ�����
            n = -n;
            x = 1/x; // �]�� x �� -1 ����A��1/x
        }
        if(n%2==0){
            double now = myPow(x, n/2); //�@�b��x�ۭ�
            return now * now; //���@�b�A�k�@�b�A�b�ۭ�
        }
        else{ //�_�ƭӬۭ�
            double now = myPow(x, n/2);
            return now * now * x;
        }
    }
};
