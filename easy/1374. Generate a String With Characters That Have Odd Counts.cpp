class Solution {
public:
    string generateTheString(int n) {
        string arr="";
        int i;

        if( n == 1 )
            arr += 'a';
        else if( n % 2 == 0 ){   //�Yn�Oeven
            for( i = 0; i < n-1; i++ )  //���F�̫�@�Ө�L����a
                arr += 'a';
            arr += 'b';
        }    
        else{      //�Yn�Oodd
            for( i = 0; i < n-2; i++ )  //���F�̫��Ө�L����a
                arr += 'a';
            arr += "bc";
        }

        return arr;
    }
};
