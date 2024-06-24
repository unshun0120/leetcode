class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int i;

        sum.push_back(nums[0]);
        sum.push_back(nums[0]+nums[1]);
        for( i = 2; i < nums.size(); i++ ){
            sum.push_back(nums[i]+sum[i-1]);
        }

        return sum;
    }
};
