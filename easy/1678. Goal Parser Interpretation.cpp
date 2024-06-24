class Solution {
public:
    string interpret(string command) {
        string goal;
        int i;

        for( i = 0; i < command.length(); i++ ){
            if( command[i] == 'G' )
                goal += 'G';
            else if( command[i] == '(' && command[i+1] == ')' ){
                goal += 'o';
                i++;
            }     
            else{
                goal += "al";
                i+=3;
            }
        }

        return goal;
    }
};
