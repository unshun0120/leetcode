class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i;
        vector<int> arr;

        for( i = 0; i < nums.size(); i++ ){
            if( nums[i] % 2 == 0 )
                arr.push_back(nums[i]);

        }

        for( i = 0; i < nums.size(); i++ ){
            if( nums[i] % 2 == 1 )
                arr.push_back(nums[i]);
        }

        return arr;
    }
};
