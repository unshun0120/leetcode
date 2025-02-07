class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot, sum=0, left_sum=0;

        // accumulate(first, second, initial value of the sum)
        sum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++){
            if(i != 0)
                left_sum += nums[i-1];
            sum -= nums[i];
            
            if(left_sum == sum)
                return i;
        }

        return -1;
    }
};