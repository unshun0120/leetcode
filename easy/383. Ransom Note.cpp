class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i, cht[26]={0};

        for(i = 0; i < ransomNote.size(); i++){
            cht[ransomNote[i]-'a']++;
        }

        for(i = 0; i < magazine.size(); i++){
            cht[magazine[i]-'a']--;
        }

        for(i = 0; i < 26; i++){
            if(cht[i] > 0)
                return false;
        }

        return true;
    }
};