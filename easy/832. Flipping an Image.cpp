class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i, j;
        vector<vector<int>> arr;
        vector<int> temp;

        for( i = 0; i < image.size(); i++ ){
            for( j = 0; j < image[i].size(); j++ ){
                if( image[i][j] == 1 )  
                    image[i][j] = 0;
                else
                    image[i][j] = 1;    
            }

            for( j = image[i].size()-1; j >= 0; j-- )
                temp.push_back(image[i][j]);
            arr.push_back(temp);
            temp.clear();
        }

        return arr;
    }
};
