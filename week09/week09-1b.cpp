//week09-1b.cpp leetcode 54. Spiral Matrix ������
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //�k�B�W�B���B�U
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0, j = 0, dir = 0; //dir��V: 0�k�A1�U�A2���A3�W
        int dI[4] = {0,1,0,-1}; //����i ���W���(���ʪ���)
        int dJ[4] = {1,0,-1,0}; //�k��j ���W���(���ʪ���)
        vector<int> ans;
        for(int k=0; k<N-1; k++){
                ans.push_back( matrix[i][j] ); //�⵪�ש�Jans
                i += dI[dir]; //(���ʪ���)
                j += dJ[dir]; //(���ʪ���)
        }
        dir = (dir+1)%4;
        for(int kk=1; kk<M+1; kk++){
            for(int k=0; k<M-kk; k++){
                ans.push_back( matrix[i][j] ); //�⵪�ש�Jans
                i += dI[dir]; //(���ʪ���)
                j += dJ[dir]; //(���ʪ���)
            }
            dir = (dir+1)%4;
            for(int k=0; k<N-kk; k++){
                ans.push_back( matrix[i][j] ); //�⵪�ש�Jans
                i += dI[dir]; //(���ʪ���)
                j += dJ[dir]; //(���ʪ���)
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};
