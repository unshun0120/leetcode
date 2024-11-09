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
