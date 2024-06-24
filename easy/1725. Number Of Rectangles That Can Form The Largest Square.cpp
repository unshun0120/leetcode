class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int i, k, max=0, count=0;

        for( i = 0; i < rectangles.size(); i++ ){
            if( rectangles[i][0] > rectangles[i][1] )
                k = rectangles[i][1];
            else
                k = rectangles[i][0];

            if( k > max ){
                max = k;
                count = 1;
            }    
            else if( k == max ){
                count++;
            }
        }

        return count;
    }
};
