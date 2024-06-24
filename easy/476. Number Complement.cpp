class Solution {
public:
    int findComplement(int num) {
        string arr="", bin="";
        int ans=0, i, index=0;

        while( num != 0 && num != 1 ){
            if( num % 2 == 0 )
                arr += '0';
            else
                arr += '1';
            num /= 2;
            index++;
        }
        if( num == 0 )
            arr += '0';
        else
            arr += '1';
        index++;
        for( i = index-1; i >= 0; i-- ){
            if( arr[i] == '0' )
                bin += '1';
            else
                bin += '0';
        }

        for( i = index-1; i >= 0; i-- ){
            ans += pow(2, index-i-1)*(int)(bin[i]-48);
        }

        return ans;
    }
};
