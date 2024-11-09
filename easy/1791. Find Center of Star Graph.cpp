class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int max=0, maxi=1, i, j, size;
        size = edges.size();
        int node[size+2];

        for( i = 1; i <= size+1; i++ ) node[i] = 0;    //initial

        for( i = 0; i < size; i++ ){    //將遇到的node其對應的index+1
            for( j = 0; j < 2; j++ ){
                node[edges[i][j]]++;
            }
        }

        for( i = 1; i <= size+1; i++ ){  
            if( node[i] > max ){
                max = node[i];
                maxi = i;
            } 
        }


        return maxi;
    }
};
