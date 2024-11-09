class Solution {
public:
    struct record{
        int r=0;
        int g=0;
        int b=0;
    };

    int countPoints(string rings) {
        int i, lens = rings.length(), count=0;

        record rec[10];
        for( i = 0; i < rings.length(); i++ ){
            if( rings[i] >= 65 && rings[i] <= 90 ){
                if( rings[i] == 'R' )
                    rec[ rings[i+1]-48 ].r++;
                else if( rings[i] == 'G' )
                    rec[ rings[i+1]-48 ].g++;
                else
                    rec[ rings[i+1]-48 ].b++;
            }
        }

        for( i = 0; i < 10; i++ ){
            if( rec[i].r != 0 && rec[i].g != 0 && rec[i].b != 0 )
                count++;
        }

        return count;
    }
};
