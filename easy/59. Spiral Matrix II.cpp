class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int i, j, num=1, startx=0, starty=0, offset=1;
        vector<vector<int>> mat(n, vector<int>(n));

        while( num < (n*n) ){
            cout << num << endl;
            //用左閉右開 -> 只處理第一個格子不處理最後一格
            //最上面 由左到右 變量是j，以最上面一行為例offset就是1，最上面第二行為例offset就是2
            for( j = starty; j < n-offset; j++ ){ 
                mat[startx][j] = num++;
            }  
            //右
            for( i = startx; i < n-offset; i++ ){
                mat[i][n-offset] = num++;
            }
            //下
            for( j = n-offset; j > starty; j-- ){
                mat[n-offset][j] = num++;
            }
            //左
            for( i = n-offset; i > startx; i-- ){
                mat[i][starty] = num++;
            }
            //(startx, starty)每次循環後的起始位置也就是每圈左上角的座標所以會以
            //(0,0) -> (1,1) -> (2,2)...變化
            startx++;
            starty++;
            //每次循環後下一次每個邊走的長度會減少1
            offset++;
        }

        //奇數長度的size，while跑完後中心點會沒填到數字
        if( n%2 == 1 ){
            mat[n/2][n/2] = num;
        }

        return mat;
    }
};