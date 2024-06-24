class Solution {
public:
    vector<int> diStringMatch(string s) {
        int lens = s.length(), i, L=0, U=lens;
        vector<int> arr;

        for( i = 0; i < lens; i++ ){
            if( s[i] == 'I' ){
                arr.push_back( L );
                L++;
            }
            else{
                arr.push_back( U );
                U--;
            }
        }
        arr.push_back(L);

        return arr;
    }
};
