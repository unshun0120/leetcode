class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i, small_len;
        string word="";

        if(word1.length() <= word2.length())
            small_len = word1.length();
        else
            small_len = word2.length();

        for(i = 0; i < small_len; i++){
            word += word1[i];
            word += word2[i];
        }

        if(small_len == word1.length()){
            for(int j = i; j < word2.length(); j++){
                word += word2[j];
            }
        }
        else{
            for(int j = i; j < word1.length(); j++){
                word += word1[j];
            }
        }

        return word;
    }
};