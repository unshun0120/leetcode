class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i, left=0, pro=1, count=0;

        for( i = 0; i < nums.size(); i++ ){
            pro *= nums[i];
            while( left <= i && pro >= k ){
                pro /= nums[left];
                left++;
            }
            cout << nums[left] << " " << nums[i] << endl;
            count += i-left+1;
        }

        return count;
    }
};
