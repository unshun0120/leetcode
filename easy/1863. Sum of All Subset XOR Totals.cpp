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

        dfs( nums, index+1, sum );   //���Ʀr����xor
        dfs( nums, index+1, sum^nums[index] );  //���Ʀr��xor

    }

};  
