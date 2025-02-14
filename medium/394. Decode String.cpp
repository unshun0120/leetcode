class Solution {
    public:
        string decodeString(string s) {
            string decode="", word="", number="";
            stack<char> symbol;
            int repeat=0, count=0;
            
            for(int i = 0; i < s.length(); i++){
                if(s[i] == ']'){
                    // get the words
                    word = "";
                    while(symbol.top() != '['){
                        word += symbol.top();
                        symbol.pop();
                    }
                    // e.g. 從stack拿出來會是cbcb, 做reverse把它變成bcbc才對
                    reverse(word.begin(), word.end());
                    symbol.pop();
    
                    // get the repeat number
                    number = "";
                    repeat = 0;
                    while(!symbol.empty() && symbol.top() >= 48 && symbol.top() <= 57){ 
                        number += symbol.top();
                        symbol.pop();
                    }
                    reverse(number.begin(), number.end());
                    // turn (string)number into (int)repeat
                    for(int j = 0; j < number.length(); j++){
                        repeat += ((int)number[j] - 48) * pow(10, number.length()-j-1);
                    }
                    // push repeat string into stack
                    for(int j = 0; j < repeat; j++){
                        for(int k = 0; k < word.length(); k++){
                            symbol.push(word[k]);
                        }
                    }      
                }
                else{ 
                    symbol.push(s[i]);
                }
            }
            // write stack symbol into decode string
            while(!symbol.empty()){
                decode += symbol.top();
                symbol.pop();
            }
            reverse(decode.begin(), decode.end());
    
            return decode;
        }
    };