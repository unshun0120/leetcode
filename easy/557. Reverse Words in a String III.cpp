class Solution {
public:
    string reverseWords(string s) {
        int i, j, index=0;
        string arr="";

        for( i = 0; i < s.length(); i++ ){
            if( s[i] == ' ' ){
                if( index != 0 ){
                    arr += ' '; 
                    for( j = i-1; j > index; j-- ){
                        arr += s[j];
                    }
                    index = i;
                }
                else{
                    for( j = i-1; j >= index; j-- ){
                        arr += s[j];
                    }
                    index = i;
                }
                    
            } 
        }

        if( index != 0 ){
            arr += ' '; 
            for( i = s.length()-1; i > index; i-- )
                arr += s[i];
        }
        else{
            for( i = s.length()-1; i >= index; i-- )
                arr += s[i];
        }
        

        return arr;
    }
};
