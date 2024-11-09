class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int i, esum=0, dsum=0;

        for( i = 0; i < nums.size(); i++ ){
            esum += nums[i];
            while( nums[i] ){
                dsum += nums[i]%10;
                nums[i]/=10;
            }
        }

        return abs(esum - dsum);

    }
};
