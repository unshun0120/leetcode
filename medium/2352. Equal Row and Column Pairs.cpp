class Solution {
    public:
        int equalPairs(vector<vector<int>>& grid) {
            int count=0, n=grid.size();
            vector<int> row_temp, col_temp;
    
            for(int i = 0; i < n; i++){ //row
                row_temp = grid[i];
                for(int j = 0; j < n; j++){ //col
                    for(int k = 0;k < n; k++){
                        col_temp.push_back(grid[k][j]);
                    }
                    if(row_temp == col_temp){
                        count++; 
                    }
                    col_temp.clear();
                }
                
                
            }
    
            return count;
        }
    };