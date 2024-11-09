class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        for( int i = 0; i < board.size(); i++ ){
            for( int j  = 0; j < board[0].size(); j++ ){
                if( dfs(board, word, 0, i, j) ){
                    return true;
                }
            }
        }

        return false;
    }

    bool dfs( vector<vector<char>>& board, string& word, int idx, int x, int y ){
        if( x < 0 || y < 0 || x >= board.size() || y >= board[0].size() )
            return false;
        
        if( board[x][y] != word[idx] )
            return false;

        if( idx == word.length()-1 )
            return true;

        char cur = board[x][y];
        board[x][y] = '0';
        bool found = dfs( board, word, idx+1, x+1, y ) |
                     dfs( board, word, idx+1, x-1, y ) |
                     dfs( board, word, idx+1, x, y+1 ) |
                     dfs( board, word, idx+1, x, y-1 );
        board[x][y] = cur;

        return found;
    }
};
