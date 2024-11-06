//week09-1b.cpp leetcode 54. Spiral Matrix 未完成
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //右、上、左、下
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0, j = 0, dir = 0; //dir方向: 0右，1下，2左，3上
        int dI[4] = {0,1,0,-1}; //左手i 的增減值(移動的值)
        int dJ[4] = {1,0,-1,0}; //右手j 的增減值(移動的值)
        vector<int> ans;
        for(int k=0; k<N-1; k++){
                ans.push_back( matrix[i][j] ); //把答案放入ans
                i += dI[dir]; //(移動的值)
                j += dJ[dir]; //(移動的值)
        }
        dir = (dir+1)%4;
        for(int kk=1; kk<M+1; kk++){
            for(int k=0; k<M-kk; k++){
                ans.push_back( matrix[i][j] ); //把答案放入ans
                i += dI[dir]; //(移動的值)
                j += dJ[dir]; //(移動的值)
            }
            dir = (dir+1)%4;
            for(int k=0; k<N-kk; k++){
                ans.push_back( matrix[i][j] ); //把答案放入ans
                i += dI[dir]; //(移動的值)
                j += dJ[dir]; //(移動的值)
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};
