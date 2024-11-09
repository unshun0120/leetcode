class Solution {
public:
    string convertDateToBinary(string date) {
        istringstream iss(date);
        string token, bin;
        bool start=true;
        while( getline(iss, token, '-') ){  //字串根據 "-" 分割
            if( start ) //加上 "-"
                start = false;
            else
                bin += '-';
            int target = stoi( token ); //string轉int

            string temp="";
            while( target != 0 ){   //decimal轉binary
                if( target % 2 == 0 )
                    temp += '0';
                else
                    temp += '1';
                target /= 2;
            }
            for( int i = temp.length()-1; i >= 0; i-- ){
                bin += temp[i];
            }
        }

        return bin;
    }
};