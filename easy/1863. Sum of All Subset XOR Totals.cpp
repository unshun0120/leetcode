class Solution {
public:
    int ans = 0;
    int subsetXORSum(vector<int>& nums) {
        dfs( nums, 0, 0 );
        return ans;
    }   

    void dfs( vector<int>& nums, int index, int sum ){

        if( index == nums.size() ){
            ans += sum;
            return ;
        }

        dfs( nums, index+1, sum );   //此數字不做xor
        dfs( nums, index+1, sum^nums[index] );  //此數字做xor

    }

};  
