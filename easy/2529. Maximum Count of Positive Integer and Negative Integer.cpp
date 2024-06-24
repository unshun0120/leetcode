class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i, neg=0, pos=0;

        for( i = 0; i < nums.size(); i++ ){
            if( nums[i] > 0 )
                pos++;
            else if( nums[i] < 0 )
                neg++;
        }

        if( pos > neg )
            return pos;
        else
            return neg;

    }
};
