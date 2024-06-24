class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int money[accounts.size()], i, j, max=0;

        for( i = 0; i < accounts.size(); i++ ){
            money[i] = 0;
            for( j = 0; j < accounts[i].size(); j++ ){
                money[i] += accounts[i][j];
            }
        }

        for( i = 0; i < accounts.size(); i++ ){
            if( money[i] > max )
                max = money[i];
        }

        return max;
    }
};
