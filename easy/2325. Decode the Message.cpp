class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> dir;
        int i, index=0;
        string arr;

        for( i = 0; i < key.length(); i++ ){
            if( key[i] != ' ' && dir.find(key[i]) == dir.end() ){
                dir[key[i]] = (char)(index+97);
                index++;
            }
        }

        for( i = 0; i < message.length(); i++ ){
            if( message[i] == ' ' )
                arr += ' ';
            else{
                arr += dir.find(message[i])->second;
            }
        }

        return arr;
    }
};
