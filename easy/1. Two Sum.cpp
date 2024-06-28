class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_set;
        int i;

        for(i = 0; i < nums.size(); i++){
            auto iter = num_set.find(target - nums[i]);
            if( iter != num_set.end())
                return {iter->second, i};
            else
                num_set.insert(pair<int, int>(nums[i], i));
        }

        return {};
    }
};