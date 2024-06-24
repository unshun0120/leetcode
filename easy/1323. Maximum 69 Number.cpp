class Solution {
public:
    int maximum69Number (int num) {
        int index=0, maxidx=-1, n=num;
        
        while( num ){   //т程蔼计6ぇ竚
            if( num%10 == 6 )
                maxidx = index;
            num/=10;
            index++;
        }

        if( maxidx != -1 )  //р程蔼计6跑Θ9
            n += 3*pow(10, maxidx);

        return n;
    }
};
