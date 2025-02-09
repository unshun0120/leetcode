class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right=0, max=0, curr_zero=0;
        
        // right不斷右移增加window size, 當 #0 > k, left右移
        while(right < nums.size()){
            if(nums[right] == 0)
                curr_zero++;
            
            if(curr_zero <= k && right-left+1 > max){
                max = right-left+1;
            }
            else if(curr_zero > k){
                if(nums[left] == 0)
                    curr_zero--;
                left++;
            }

            right++;
        }

        return max;
    }
};