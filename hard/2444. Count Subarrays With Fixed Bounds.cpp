class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int i, left=0, right=0;
        int lastMin=-1, lastMax=-1;
        long long ans=0;

        while( right < nums.size() ){
            if( nums[right] < minK || nums[right] > maxK ){
                lastMin = -1;
                lastMax = -1;
                left = right + 1;
            }

            if( nums[right] == minK )
                lastMin = right;
            if( nums[right] == maxK )  
                lastMax = right;
            
            if( lastMin != -1 && lastMax != -1 )
                ans += min(lastMin, lastMax) - left +1;

            right++;
        }        

        return ans;
    }
};
