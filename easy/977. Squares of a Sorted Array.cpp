class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i, left=0, right=nums.size()-1;
        vector<int> res( nums.size() );

        for( i = nums.size()-1; i >= 0; i-- ){
            if( nums[left]*nums[left] > nums[right]*nums[right] ){
                res[i] = nums[left]*nums[left];
                left++;
            }
            else{
                res[i] = nums[right]*nums[right];
                right--;
            }
        }

        return res;
    }
};