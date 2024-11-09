class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int i, count=0, curr=0;
        string ans="";

        for( i = 0; i < s.length(); i++ ){
            if( s[i] >= 97 && s[i] <= 122 )
                s[i] = s[i] - 32;
            if( s[i] != '-' )
                count++;    //計算共有幾個數字及字母
        }  

        if( count % k == 0 ){    //能整除 則依據k平均分堆
            cout << "1";
            curr = 0;
            for( i = 0; i < s.length(); i++ ){
                if( curr < k && s[i] != '-' ){
                    ans += s[i];
                    curr++;
                }
                else if( curr == k && s[i] !='-' ){
                    ans += '-';
                    curr = 0;
                    if( s[i] != '-' )
                        i--;
                }
            }
        }
        else{   //不能整除 -> 第一個位置放餘數個字母 其餘依據k平均分堆
            cout << "2";
            int c = 0, begin;
            for( i = 0; i < s.length(); i++ ){
                if( s[i] != '-' ){
                   ans += s[i];
                   c++;               
                } 
                if( c == ( count%k ) ){
                    begin = i;
                    break;
                }
            }
            if( begin != s.length()-1 )
                ans += '-';
            curr = 0;
            for( i = begin+1; i < s.length(); i++ ){
                if( curr < k && s[i] != '-' ){
                    ans += s[i];
                    curr++;
                }
                else if( curr == k && s[i] != '-' ){
                    ans += '-';
                    curr = 0;
                    if( s[i] != '-' )
                        i--;
                }
            }
        }

        return ans;
    }
};
