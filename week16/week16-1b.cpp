//week16-1b.cpp leetcode 50. Pow(x, n)
class Solution { //�o�ؼg�k���~�A�]��n�Ӥj
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n>0){ //�κƨg�{�]���g�k�A���O n<0 �|����
            for(int i=0; i<n; i++){
                ans *= x;
            }
        }
        else if(n<0){ //�S�O�w�� n<0 �έt�t�o���A�����˹L�Ӫ��Φ�
            for(int i=0; i<-n; i++){
                ans *= 1/x;
            }
        }
        return ans;
    }
};
