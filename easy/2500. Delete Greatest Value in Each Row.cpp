class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int i, j, k, sum=0, m, n;
        m = grid.size();    //row
        n = grid[0].size(); //column

        for( i = 0; i < m; i++ ){   //每列做sort
            for( j = 0; j < n; j++ ){
                for( k = 0; k < j; k++ ){
                    if( grid[i][k] < grid[i][j] )
                        swap( grid[i][k], grid[i][j] );
                }
            }
        }

        int max, index=0;

        for( i = 0; i < n; i++ ){   //把每行中最大的加到sum
            max = 0;
            for( j = 0; j < m; j++ ){
                if( grid[j][i] > max )  max = grid[j][i];
            }
            sum += max;
        }


        return sum;
    }
};
