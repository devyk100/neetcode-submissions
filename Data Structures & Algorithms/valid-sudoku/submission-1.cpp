class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> row(9), col(9), tile(9);

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                char c = board[i][j];
                if(c == '.') continue;
                int a = c - '0';
                int tileIndex = (j/3) + 3*(i/3);
                
                if(((row[i] >> a) & 1) || ((col[j] >> a) & 1) || ((tile[tileIndex] >> a) & 1)) {
                    return false;
                }
                row[i] = (1 << a) | row[i];
                col[j] = (1 << a) | col[j];
                tile[tileIndex] = (1 << a) | tile[tileIndex];
            }
        }

        return true;
    }
};
