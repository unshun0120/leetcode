class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int slens = s.length();
        int tlens = t.length();
        int i;
        int sp[128] = {0}, tp[128] = {0};
        
        if(slens != tlens)
            return false;
        
        for( i = 0; i < slens; i++ ){
            if( sp[ s[i] ] != tp[ t[i] ] )
                return false;
            sp[ s[i] ] = i + 1;
            tp[ t[i] ] = i + 1;
            
        }
        
        
        return true;
    }
};
