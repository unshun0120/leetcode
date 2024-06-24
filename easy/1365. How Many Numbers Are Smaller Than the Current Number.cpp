class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count;
        int i, j;

        for( i = 0; i < nums.size(); i++ ){
            count.push_back(0);
            for( j = 0; j < nums.size(); j++ ){
                if( i != j && nums[i] > nums[j] ){
                    count[i]++;
                }
            }
        }

        return count;
    }
};
