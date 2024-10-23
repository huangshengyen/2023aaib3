//week07-2b.cpp leetcode�ǲ߭p�e 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    bool testWin(int board[3][3], int now){
        if(board[0][0] == now && board[0][1] == now && board[0][2] == now) return true; //�W�����
        if(board[1][0] == now && board[1][1] == now && board[1][2] == now) return true; //�������
        if(board[2][0] == now && board[2][1] == now && board[2][2] == now) return true; //�U�����
        //�A�ӬO�Ȫ�
        if(board[0][0] == now && board[1][0] == now && board[2][0] == now) return true; //������
        if(board[0][1] == now && board[1][1] == now && board[2][1] == now) return true; //������
        if(board[0][2] == now && board[1][2] == now && board[2][2] == now) return true; //�k����
        //�A�ӬO�ת�
        if(board[0][0] == now && board[1][1] == now && board[2][2] == now) return true; //���W�k�U
        if(board[2][0] == now && board[1][1] == now && board[0][2] == now) return true; //���U�k�W
        return false; //�e���S�����\�A�N�O����
        }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //Step03: C���}�C�A�̭�����0�N��S���H��F��
        int now = 1; //1,2,1,2(��now = 3 - now�N�|���ʤF)
        //myDrawBoard(board);
        for(auto move : moves){ // Step01: C++�i���j��
            int i = move[0], j = move[1]; //Step02: ���X�}�C�̭�����
            board[i][j] = now;
            //myDrawBoard(board);
            if(testWin(board, now)){
                if(now == 1) return "A";
                else return "B";
            }
            now = 3 - now;
        }
        return "Draw"; //"A" or "B" or "Draw"(����)
    }
};
