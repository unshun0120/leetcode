class Solution {
public:
    string removeKdigits(string num, int k) {
        int i;
        string ans;

        for( i = 0; i < num.length(); i++ ){
            while( k > 0 && !ans.empty() && num[i] < ans.back() ){
                ans.pop_back();
                k--;
            }
            ans.push_back( num[i] );
        }

        while( k > 0 ){
            ans.pop_back();
            k--;
        }

        while( ans[0] == '0' ){
            ans.erase( ans.begin() );
        }

        if( ans.empty() )
            ans = "0";

        return ans;
    }

