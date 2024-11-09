class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0, i, j;
        int lens = stones.length(), lenj = jewels.length();
        bool smatch[lens];
        
        for( i = 0; i < lens; i++ ) smatch[i] = false;

        for( i = 0; i < lens; i++ ){
            for( j = 0; j < lenj; j++ ){
                if( stones[i] == jewels[j] && smatch[i] == false){   //配對成功且該stone韓jewels沒被配對過
                    count++;
                    smatch[i] = true;
                }
                
            }
        }


        return count;
    }
};
