class Solution {
    public:
        int tribonacci(int n) {
            if(n == 0)
                return 0;
            else if(n == 1)
                return 1;
            else if(n == 2)
                return 1;
    
            long long f[n];
            
            f[0] = 0; f[1] = 1; f[2] = 1;
            for(int i = 3; i < n; i++){
                f[i] = f[i-1] + f[i-2] + f[i-3];
            }
    
            return f[n-1] + f[n-2] + f[n-3]; 
        }
    };