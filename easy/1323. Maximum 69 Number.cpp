class Solution {
public:
    int maximum69Number (int num) {
        int index=0, maxidx=-1, n=num;
        
        while( num ){   //��X�̰���ƪ�6����m
            if( num%10 == 6 )
                maxidx = index;
            num/=10;
            index++;
        }

        if( maxidx != -1 )  //��̰���ƪ�6�ܦ�9
            n += 3*pow(10, maxidx);

        return n;
    }
};
