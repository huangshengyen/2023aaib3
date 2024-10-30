//week08-3a.cpp leetcode 73. Set Matrix Zeroes
//直覺寫出來的答案「是錯的」，因為0蔓延之後便太多0了
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> up(N); //宣告一個陣列，是放在上面up，用來打勾勾標註「有哪幾直條要刪」
        vector<int> left(M);//宣告一個陣列，是放在上面left，用來打勾勾標註「有哪幾橫條要刪」
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){
                    up[j]=1;//for(int ii=0; ii<M; ii++) matrix[ii][j]=0;//錯誤版本(太多0互相汙染)
                    left[i]=1;//for(int jj=0; jj<N; jj++) matrix[i][jj]=0;
                }
            }
        }
        for(int i=0; i<M; i++){
            if(left[i]==1) for(int jj=0; jj<N; jj++) matrix[i][jj]=0;//如果左邊有打勾勾，就整條刪除 橫條
        }
        for(int j=0; j<N; j++){
            if(up[j]==1) for(int ii=0; ii<M; ii++) matrix[ii][j]=0; //如果上面有打勾勾，就整條刪除 直條
        }
    }
};
