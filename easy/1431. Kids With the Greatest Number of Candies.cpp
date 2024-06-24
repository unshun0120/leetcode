class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int i, max=0;

        for( i = 0; i < candies.size(); i++ ){
            res.push_back(false);
            if( candies[i] > max )
                max = candies[i];
        }

        for( i = 0; i < candies.size(); i++ ){
            if( candies[i] + extraCandies >= max )
                res[i] = true;
        }

        return res;
    }
};
