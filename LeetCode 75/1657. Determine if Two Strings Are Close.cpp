class Solution {
    public:
        bool closeStrings(string word1, string word2) {
            if(word1.length() != word2.length())
                return false;
    
            int i, j;
            set<char> occur_char;
            map<int, int> occur_num;
    
            sort(word1.begin(), word1.end());
            for(i = 0; i < word1.length(); i++){
                for(j = i+1; j < word1.length(); j++){
                    if(word1[j] != word1[i]){
                        occur_char.insert(word1[i]);
                        if(occur_num.count(j-i)){
                            occur_num.find(j-i)->second++;
                        }
                        else{
                            occur_num.insert(pair<int, int>(j-i, 1));
                            i = j-1;
                        }
                        break;
                    }
                }
                if(j == word1.length()){
                    occur_char.insert(word1[i]);
                    if(occur_num.count(j-i)){
                        occur_num.find(j-i)->second++;
                    }
                    else{
                        occur_num.insert(pair<int, int>(j-i, 1));
                        i = j-1;
                    }
                    break;
                }
            }
            cout<<"---"<<endl;
            sort(word2.begin(), word2.end());
            for(i = 0; i < word2.length(); i++){
                for(j = i+1; j < word2.length(); j++){
                    if(word2[j] != word2[i]){
                        if(!occur_char.count(word2[i]) || !occur_num.count(j-i) || occur_num.find(j-i)->second==0){
                            return false;
                        }
                        else{
                            occur_num.find(j-i)->second--;
                            i = j-1;
                        }
                        break;
                    }
                }
                if(j == word2.length()){
                    if(!occur_char.count(word2[i]) || !occur_num.count(j-i) || occur_num.find(j-i)->second==0){
                        return false;
                    }
                    else{
                        occur_num.find(j-i)->second--;
                        i = j-1;
                    }
                    break;
                }
            }
    
            return true;
        }
    };