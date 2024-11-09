class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i, left=0, sum=0, lens=0, max=0;
        unordered_map<int, int> count;

        for( i = 0; i < nums.size(); i++ ){
            count[nums[i]]++;
            while( left <= i && count[nums[i]] > k ){
                count[nums[left]]--;
                left++;
            }
            lens = i-left+1;
            if( lens > max ){
                max = lens;
            }
        }

        return max;
    }
};
