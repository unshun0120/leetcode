class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0, i, j;

        for( i = 0; i < nums.size(); i++ ){
            for( j = i+1; j < nums.size(); j++ ){
                if( nums[i] == nums[j] ){
                    if( ( i*j ) % k == 0 )
                        count++;
                }
            }
        }


        return count;
    }
};
