class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0, i;

        for( i = 0; i < n; i++ ){
            ans ^= start + 2*i;
        }
            
        return ans;
    }
};
