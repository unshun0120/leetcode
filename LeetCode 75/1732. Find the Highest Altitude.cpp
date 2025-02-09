class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int h=0, max=0, i;

        for( i = 0; i < gain.size(); i++ ){
            h += gain[i];
            if( h > max )
                max = h;
        }
        
        return max;
    }
};

// Another Solution with same idea
// 這是我第二次寫的, 好像變得沒那麼簡潔哈哈

/*class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max;

        for(int i = 1; i < gain.size(); i++){
            gain[i] += gain[i-1];
        }

        max = *max_element(gain.begin(), gain.end());
        if(max < 0)
            return 0;
        else
            return max;

    }
};*/
