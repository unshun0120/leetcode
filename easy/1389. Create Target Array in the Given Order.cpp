class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int size = nums.size();
        int arr[size];
        bool match[size];
        int i, j;
        int temp[size]; //存要被移動的array

        for( i= 0; i < size; i++ )  match[i] = false;   //initial match array

        for( i = 0; i < size; i++ ){
            if( match[ index[i] ] == false ){     //尚未填入數字
                arr[ index[i] ] = nums[i];
                match[index[i]] = true;
            }            
            else{       //need to be moved
                for( j = index[i]; j < i; j++ )
                    temp[j] = arr[j];
                arr[ index[i] ] = nums[i];
                for( j = index[i]+1; j <= i; j++ ){
                    arr[j] = temp[j-1];
                    match[j] = true;
                }
                
            }
        }

        for( i = 0; i < size; i++ )
            ans.push_back( arr[i] );

        return ans;
    }
};
