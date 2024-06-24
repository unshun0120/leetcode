class Solution {
public:
    vector<int> countBits(int n) {
        int i, temp, count;
        vector<int> arr;

        for( i = 0; i < n+1; i++ ){
            temp = i;
            count = 0;
            while( temp ){
                if( temp % 2 == 1 )
                    count++;
                temp /= 2;
            }
            arr.push_back( count );
        }

        return arr;
    }
};
