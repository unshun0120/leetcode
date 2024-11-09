class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int i, j, count=0;
        int arr[m][n];

        for( i = 0; i < m; i++ )
            for( j = 0; j < n; j++ )
                arr[i][j] = 0;

        for( i = 0; i < indices.size(); i++ ){
            for( j = 0; j < n; j++ ){
                arr[ indices[i][0] ][j]++;
            }
            for( j = 0; j < m; j++ ){
                arr[j][ indices[i][1] ]++;
            }
        }

        for( i = 0; i < m; i++ ){
            for( j = 0; j < n; j++ ){
                if( arr[i][j]%2 != 0 )
                    count++;
            }
        }

        return count;
    }
};
