class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans;

        if( n == 1 )
            return 2;
        if( n%2 == 0 )
            ans = n;
        else
            ans = n*2;

        return ans;
    }
};
