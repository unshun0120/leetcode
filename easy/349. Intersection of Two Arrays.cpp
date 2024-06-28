class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res;
        unordered_set<int> num_set(nums1.begin(), nums1.end());

        for(int num : nums2){   //num會是nums2內的數字，跑一次for num就讀一個數字
            if(num_set.find(num) != num_set.end())  //沒找到會回傳end()，不等於成立表示有找到
                res.insert(num);
        }

        return vector<int>(res.begin(), res.end());
    }
};