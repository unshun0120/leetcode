class Solution {
public:
    string sortString(string s) {
        int i, j, lens = s.length();
        bool match[lens];
        string arr;
        int count = 0;  //紀錄是否每個字母都有配對到

        for( i = 0; i < s.length(); i++ ){  //sort 小到大   initialize
            match[i] = false;   //initialize "match" array
            for( j = 0; j < i; j++ ){
                if( s[i] < s[j] )
                    swap( s[i], s[j] );
            }
        }
        
        int index=-1;    //最新一筆資料的index

        while( count != lens ){
            for( i = 0; i < lens; i++ ){
                if( match[i] == false ){    //append smallest
                    arr += s[i];
                    match[i] = true;
                    count++;
                    index++;
                    //cout << "1" << " " << s[i] << " " << index << endl;
                    break;
                }
            }

            for( i = 0; i < s.length(); i++ ){  //step2
                if( s[i] > arr[index] && match[i] == false ){
                    arr += s[i];
                    match[i] = true;
                    count++;
                    index++;
                    //cout << "2" << " " << s[i] << " " << index << endl;
                }
            }

            for( i = lens-1; i >= 0; i-- ){
                if( match[i] == false ){    //append biggest
                    arr += s[i];
                    match[i] = true;
                    count++;
                    index++;
                    //cout << "3" << " " << s[i] << " " << index << endl;
                    break;
                }
            }

            for( i = lens-1; i >= 0; i-- ){
                if( s[i] < arr[index] && match[i] == false ){
                    arr += s[i];
                    match[i] = true;
                    count++;
                    index++;
                    //cout << "4" << " " << s[i] << " " << index << endl;
                }
            }
        }
        

        

        return arr;
    }
};
