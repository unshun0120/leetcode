class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0, right=0, sum=0, min=100000;
        bool find = false;

        //use sliding window
        while( right < nums.size() && left <= right ){
            sum += nums[right];
            cout << sum << endl;
            if( sum >= target ){
                if( (right - left + 1) <= min ){
                    find = true;
                    min = right - left + 1;
                }
                if( sum > target ){
                    sum -= nums[left]; 
                    sum -= nums[right]; //再跑一次while會多算到一次
                    left++;
                }
                else
                    right++;
            }
            else if( sum < target ){
                right++;
            }
        }

        if( find )
            return min;
        else
            return 0;
    }
};