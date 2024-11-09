class Solution {
public:
    bool checkIfPangram(string sentence) {
        int i;
        int appear[26]={0};

        for( i = 0; i < sentence.length(); i++ ){       
            if( sentence[i] < 97 || sentence[i] > 122 )     //是否有不是小寫英文字母
                return false;
            else
                appear[sentence[i]-97] = 1;     //將出現過的字母其對應的index set 1
        }

        for( i = 0; i < 26; i++ ){      //若有0代表沒出現過->false
            if( appear[i] == 0 )
                return false;
        }

        return true;


    }
};
