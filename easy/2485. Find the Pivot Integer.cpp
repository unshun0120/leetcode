class Solution {
public:
    int pivotInteger(int n) {
        int i, j, pivotSum=0, sum=0;
        bool find = false;

        for( i = 1; i <= n; i++ ){
            pivotSum = 0;
            sum = 0;
            for( j = 1; j <= i; j++ ){
                pivotSum += j;
            }

            for( j = i; j <= n; j++ ){
                sum += j;
            }

            if( pivotSum == sum ){     
                find = true;
                break;
            }
        }

        if( find )
            return i;
        else
            return -1;

        
    }
};
