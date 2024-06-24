class Solution {
public:
    int trap(vector<int>& height) {
        int i, j, water=0;
        vector<int> left_max, right_max;

        for( i = 0; i < height.size(); i++ ){   //find max height in left side
            if( i == 0 || height[i] > left_max[i-1] )    
                left_max.push_back( height[i] );
            else
                left_max.push_back( left_max[i-1] );
        }

        for( i = height.size()-1, j = 0; i >= 0; i--, j++ ){    //find max height in right side
            if( i == height.size()-1 || height[i] > right_max[j-1])    
                right_max.push_back( height[i] );
            else
                right_max.push_back( right_max[j-1] );
        }
        reverse( right_max.begin(), right_max.end() );

        for( i = 0; i < height.size(); i++ ){   //compute how much water can be trapped
            water += min( left_max[i], right_max[i] ) - height[i];
        }

        return water;
    }
};
