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
                if( (j+2) < col && (i+2) < row ){   //�Y�S���W�L�x�}�d��
                    max = 0;
                    for( k = i; k <= i+2; k++ ){    //�s�J3*3�x�}���̤j���Ȩ�max
                        for( l = j; l <= j+2; l++ ){
                            if( grid[k][l] > max )  max = grid[k][l];
                        }
                    }
                    temp.push_back(max);    //�Nmax�s��vector temp��
                } 
            } 
            if( !temp.empty() ){    //�N�ثe���C�����쪺�Ҧ��̤j�Ȧs�Jvetor<vector> maxLocal��, �òM��temp�~��U�@�C
                maxLocal.push_back(temp);
                temp.clear();
            }
            
        }


        return maxLocal;
    }
};
