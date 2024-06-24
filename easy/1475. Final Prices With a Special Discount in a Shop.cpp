class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i, j;
        vector<int> dis;

        for( i = 0; i < prices.size(); i++ ){
            for( j = i+1; j < prices.size(); j++ ){
                if( prices[i] >= prices[j] ){
                    dis.push_back( prices[i] - prices[j] );
                    break;
                }
            }
            if( j == prices.size() )
                dis.push_back(prices[i]);
        }

        return dis;

    }
};
