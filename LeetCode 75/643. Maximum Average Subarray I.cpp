class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;

        // 先加第一輪
        for(int i = 0; i < k; i++)
            sum += nums[i];

        double max = sum;
        for(int i = k; i < nums.size(); i++){
            sum += nums[i];
            sum -= nums[i-k];
            
            if(sum > max){
                max = sum;
            }
        }

        return max/k;
    }
};