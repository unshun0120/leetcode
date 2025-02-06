class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0, right=0, curr_zero=0, max=0;
        bool nozero=true, twoZero=false;

        while(right < nums.size()){
            if(nums[right] == 0){
                curr_zero++;
                nozero = false;
            }
            
            if(curr_zero == 1 && right-left > max){
                max = right-left;
            }
            else if(curr_zero > 1){
                if(nums[left] == 0)
                    curr_zero--;
                left++;
            }

            right++;
        }

        if(nozero)  //沒有0的情況, e.g. Example3
            return nums.size()-1;

        return max;
    }
};