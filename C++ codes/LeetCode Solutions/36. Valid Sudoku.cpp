class Solution {
public:
    bool valid(vector<vector<char>>& board, int x, int y) {
        char n = board[x][y];
        for(int i = 0; i < board.size(); i++) {
            if(board[i][y] == n && i != x) return 0;
        }
        for(int j = 0; j < board[0].size(); j++) {
            if(board[x][j] == n && j != y) return 0;
        }
        int r = (x/3)*3;
        int c = (y/3)*3;
        for(int i = r; i < r+3; i++) {
            for(int j = c; j < c+3; j++) {
                if(board[i][j] == n && i!=x && j!=y) return 0;
            }
        }
        return 1;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] != '.' && !valid(board, i, j)) return 0;
            }
        }
        return 1;
    }
};
