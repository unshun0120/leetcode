class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i, right=0, max=0, count=0;
        long long ans=0;

        for( i = 0; i < nums.size(); i++ ){
            if( nums[i] > max )
                max = nums[i];
        }
        
        for( i = 0; i < nums.size(); i++ ){
            while( right < nums.size() && count < k ){
                if( nums[right] == max )
                    count++;
                right++;
            }
            if( count < k )
                break;
            ans += nums.size()-right+1;
            if( nums[i] == max )
                count--;
            
        }

        return ans;
    }
};
