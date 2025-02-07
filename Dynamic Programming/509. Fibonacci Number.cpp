class Solution {
    public:
        int fib(int n) {
            vector<int> f;
    
            if(n == 0)
                return 0;
            else if(n == 1)
                return 1;
            else{
                f.push_back(0);
                f.push_back(1);
            }
    
            for(int i = 2; i < n; i++){
                f.push_back(f[i-1] + f[i-2]);
            }
    
            return f[n-1] + f[n-2];
        }
    };