//week08-3a.cpp leetcode 73. Set Matrix Zeroes
//��ı�g�X�Ӫ����סu�O�����v�A�]��0��������K�Ӧh0�F
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> up(N); //�ŧi�@�Ӱ}�C�A�O��b�W��up�A�Ψӥ��Ĥļе��u�����X�����n�R�v
        vector<int> left(M);//�ŧi�@�Ӱ}�C�A�O��b�W��left�A�Ψӥ��Ĥļе��u�����X����n�R�v
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){
                    up[j]=1;//for(int ii=0; ii<M; ii++) matrix[ii][j]=0;//���~����(�Ӧh0���ۦ��V)
                    left[i]=1;//for(int jj=0; jj<N; jj++) matrix[i][jj]=0;
                }
            }
        }
        for(int i=0; i<M; i++){
            if(left[i]==1) for(int jj=0; jj<N; jj++) matrix[i][jj]=0;//�p�G���䦳���ĤġA�N����R�� ���
        }
        for(int j=0; j<N; j++){
            if(up[j]==1) for(int ii=0; ii<M; ii++) matrix[ii][j]=0; //�p�G�W�������ĤġA�N����R�� ����
        }
    }
};
