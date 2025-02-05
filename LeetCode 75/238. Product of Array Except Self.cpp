class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product=1;
        int zero_num=0; // 紀錄0的數量

        // 紀錄0的數量, 計算除了0之外的乘積
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0)
                zero_num++;
            else
                product *= nums[i];
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(zero_num > 1){
                nums[i] = 0;
            }
            else if(zero_num == 1){
                if(nums[i] == 0)
                    nums[i] = product;
                else
                    nums[i] = 0;
            }
            else{
                nums[i] = product/nums[i];
            }
        }

        return nums;
    }
};