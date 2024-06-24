class Solution {
public:
    int minOperations(vector<int>& nums) {
        int lens = nums.size(), i, count=0;

        if( lens == 1 )
            return 0;

        for( i = 1; i < lens; i++ ){
            if( nums[i] <= nums[i-1] ){
                count += abs( nums[i-1] - nums[i] + 1 );
                nums[i] += abs( nums[i-1] - nums[i] + 1 );
            }
        }

        return count;
    }
};
