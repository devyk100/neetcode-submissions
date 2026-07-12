class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9), col(9), tile(9);

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                char c = board[i][j];
                if(c == '.') continue;
                int tileIndex = (j/3) + 3*(i/3);
                if((row[i].count(c) > 0) || (col[j].count(c) > 0) || (tile[tileIndex].count(c) > 0)) {
                    return false;
                }
                row[i].insert(c);
                col[j].insert(c);
                tile[tileIndex].insert(c);
            }
        }

        return true;
    }
};
