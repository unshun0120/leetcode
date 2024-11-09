class Solution {
public:
    int minBitFlips(int start, int goal) {
        string sbin="", gbin="";
        int i, count=0, index=0;

        while( start != 0 || goal != 0 ){   //start, goal -> binary string
            if( start%2 == 0 )  //start
                sbin += '0';
            else
                sbin += '1';
            start/=2;

            if( goal%2 == 0 )  //goal
                gbin += '0';
            else
                gbin += '1'; 
            goal/=2;
            index++;
        }

        for( i = 0; i < index; i++ ){   //比對有幾個不同
            if( sbin[i] != gbin[i] )    
                count++;
        }

        return count;
    }
};
