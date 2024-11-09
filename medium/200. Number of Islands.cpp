class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int i, j, count=0;
        int row = grid.size(), col = grid[0].size();

        for( i = 0; i < row; i++ ){
            for( j = 0; j < col; j++ ){
                if( grid[i][j] == '1' ){
                    dfs( grid, i, j);
                    count++;
                }
            }
        }

        return count;
    }

    void dfs( vector<vector<char>>& grid, int x, int y ){
            if( x < 0 || y < 0 || x > grid.size() || y > grid[0].size() || grid[x][y] == '0' )
                return ;

            grid[x][y] = '0';
            
            if( x+1 < grid.size() ) dfs( grid, x+1, y );
            if( x-1 >= 0 ) dfs( grid, x-1, y );
            if( y+1 < grid[0].size() ) dfs( grid, x, y+1 );
            if( y-1 >= 0 ) dfs( grid, x, y-1 );
    }
};
