class Solution {
    public:
        int climbStairs(int n) {
            int ways[n+1];
    
            for(int i = 1; i <= n; i++){
                if(i == 1)  
                    ways[1] = 1;
                else if(i == 2) 
                    ways[2] = 2;
                else
                    ways[i] = ways[i-1] + ways[i-2];
            }
    
            return ways[n];
        }
    };