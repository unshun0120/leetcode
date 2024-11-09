class Solution {
public:
    int minimumSum(int num) {
        int d[4], min, index=0, i, j;
        int s1, s2, s3, s4;

        while( num ){
            d[index] = num%10;
            num /= 10;
            index++;
        }

        for( i = 0; i < 4; i++ ){   //insertion sort
            for( j = 0; j < i; j++ ){
                if( d[i] < d[j] )
                    swap( d[i], d[j] );            
            }
        }

        return d[0]*10+d[2] + d[1]*10+d[3];
        

    }
};
