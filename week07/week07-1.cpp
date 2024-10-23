//week07-1.cpp 還沒完成的leetcode學習計畫 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << ' ';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //Step03: C的陣列，裡面都放0代表沒有人放東西
        for(auto move : moves){ // Step01: C++進階迴圈
            int i = move[0], j = move[1]; //Step02: 取出陣列裡面的值
            board[i][j] = 1;
            myDrawBoard(board);
        }
        return "B"; //"A" or "B" or "Draw"(平手)
    }
};
