class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
<<<<<<< HEAD
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
=======
        int max;
        vector<bool> ans;
        max = *max_element(candies.begin(),candies.end());

        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max)    
                ans.push_back(true);
            else
                ans.push_back(false);
        }   

        return ans;
    }
};
>>>>>>> cbc2563dc0d2012b4349b16b0241cd3467642ae6
