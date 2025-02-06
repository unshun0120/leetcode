class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0, right=nums.size()-1;

        // sort vector in increasing order
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i >= right)
                break;
            
            if(nums[right] + nums[i] == k){
                count++;
                right--;
            }
            else if(nums[right] + nums[i] > k){
                right--;
                i--;
            }
        }

        return count;
    }
};