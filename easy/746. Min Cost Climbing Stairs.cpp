// 想像從array最左邊外圍開始走(index=-1), 每次走1或2步,
// 走到array最右邊外圍(index=cost.size())的最小成本

class Solution {
    public:
        int minCostClimbingStairs(vector<int>& cost) {
            if(cost.size() == 1)
                return cost[0];
            else if(cost.size() == 2){
                if(cost[0] > cost[1])
                    return cost[1];
                else
                    return cost[0];
            }
            
            vector<int> dp;
    
            dp.push_back(cost[0]); 
            dp.push_back(cost[1]);
            for(int i = 2; i < cost.size(); i++){
                dp.push_back(cost[i] + min(dp[i-1], dp[i-2]));
            }
    
            return min(dp[cost.size()-1], dp[cost.size()-2]);
        }
    };