class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int i, j, k, l, row, col, max, rowidx=0, colidx=0;
        vector<vector<int>> maxLocal;
        vector<int> temp;   

        row = col = grid.size();
        int m[row-2][col-2];
        for( i = 0; i < row; i++ ){
            for( j = 0; j < col; j++ ){
                if( (j+2) < col && (i+2) < row ){   //若沒有超過矩陣範圍
                    max = 0;
                    for( k = i; k <= i+2; k++ ){    //存入3*3矩陣中最大的值到max
                        for( l = j; l <= j+2; l++ ){
                            if( grid[k][l] > max )  max = grid[k][l];
                        }
                    }
                    temp.push_back(max);    //將max存到vector temp裡
                } 
            } 
            if( !temp.empty() ){    //將目前此列中拿到的所有最大值存入vetor<vector> maxLocal中, 並清空temp繼續下一列
                maxLocal.push_back(temp);
                temp.clear();
            }
            
        }


        return maxLocal;
    }
};
