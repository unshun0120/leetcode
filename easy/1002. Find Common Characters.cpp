class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int i, j, cht[26]={0};
        vector<string> ans; 

        for(i = 0; i < words[0].size(); i++){
            cht[words[0][i] - 'a']++;
        }

        for(i = 1; i < words.size(); i++){
            int cht2[26]={0};

            for(j = 0; j < words[i].size(); j++){
                cht2[words[i][j] - 'a']++;
            }

            for(j = 0; j < 26; j++){
                if(cht2[j] < cht[j])
                    cht[j] = cht2[j];
            }
        }

        for(i = 0; i < 26; i++){
            while(cht[i]--){
                string s(1, i+'a'); //char to string
                ans.push_back(s);       //i+'a' is char
            }
        }

        return ans;
    }
};