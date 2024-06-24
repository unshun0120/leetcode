class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> arr;
        int i;
        int startr, endr, r;
        char startc, endc, temp;
        string str;
        startc = s[0];
        startr = (int)s[1]-'0';
        endc = s[3];
        endr = (int)s[4]-'0';
        r = startr;

        while( startc != endc || startr != endr ){
            temp = (char)(startr + 48); 
            str = startc;
            str += temp;
            cout << str << endl;
            arr.push_back( str );
            startr++;
            if( startr > endr ){
                startr = r;
                startc++;
            }
        } 
        str = startc;
        str += (char)(startr + 48); 
        arr.push_back(str);

        return arr;
    }
};
