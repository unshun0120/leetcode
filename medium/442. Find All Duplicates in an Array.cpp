class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i, n;
        vector<int> res;

        for( i = 0; i < nums.size(); i++ ){
            n = abs(nums[i]);
            if( nums[n-1] < 0 ){
                res.push_back(n);
            }
            else{
                nums[n-1] *= -1;
            }
        }
        return res;
    }
};
