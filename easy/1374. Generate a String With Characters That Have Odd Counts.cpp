class Solution {
public:
    string generateTheString(int n) {
        string arr="";
        int i;

        if( n == 1 )
            arr += 'a';
        else if( n % 2 == 0 ){   //璝n琌even
            for( i = 0; i < n-1; i++ )  //埃程ㄤ常恶a
                arr += 'a';
            arr += 'b';
        }    
        else{      //璝n琌odd
            for( i = 0; i < n-2; i++ )  //埃程ㄢㄤ常恶a
                arr += 'a';
            arr += "bc";
        }

        return arr;
    }
};
