class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int lens = nums.size();

        sort(nums.begin(), nums.end());

        return nums[lens-1]*nums[lens-2] - nums[1]*nums[0];
    }
};
