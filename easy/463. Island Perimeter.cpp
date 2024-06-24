class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int i, j;
        int neighbor=0, perimeter=0;

        for( i = 0; i < grid.size(); i++ ){
            for( j = 0; j < grid[0].size(); j++ ){
                if( grid[i][j] == 1 ){
                    neighbor=0;
                    if( i > 0 && grid[i-1][j] == 1 ) neighbor++;
                    if( i < grid.size()-1 && grid[i+1][j] == 1 ) neighbor++;
                    if( j > 0 && grid[i][j-1] == 1 ) neighbor++;
                    if( j < grid[0].size()-1 && grid[i][j+1] == 1 ) neighbor++;
                    cout << i << " " << j << " " << neighbor << endl;
                    perimeter += 4 - neighbor;
                }
            }
        }

        return perimeter;
    }
};
