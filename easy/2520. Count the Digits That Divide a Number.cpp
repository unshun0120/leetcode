class Solution {
public:
    int countDigits(int num) {
        int temp, count=0, div;

        temp = num;
        while( temp ){
            div = temp % 10;
            if( num % div == 0 ){
                count++;
            } 
            temp /= 10;
        }

        return count;
    }
};
