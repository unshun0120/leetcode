class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0, temp = n;
        if( n == 0 )
            return false;
        else if( n == 1 )
            return true;
        else{
            while( n%2 == 0 ){
                n /= 2;
                count++;
            }
            
            if( temp == pow(2, count) )
                return true;
            else
                return false;


        }

    }
};
