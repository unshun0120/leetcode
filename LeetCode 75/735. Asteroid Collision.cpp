class Solution {
    public:
        vector<int> asteroidCollision(vector<int>& asteroids) {
            vector<int> res;
            int i, j;
            bool not_in=false;
    
            for(i = 0; i < asteroids.size(); i++){
                not_in = false;
                if(res.empty())
                    res.push_back(asteroids[i]);
                else{
                    // 只有向左的遇到向右的會碰撞
                    for(j = res.size()-1; j >= 0; j--){
                        if(asteroids[i] < 0 && res[res.size()-1] > 0){
                            if(abs(asteroids[i]) > abs(res[j])){
                                res.pop_back();
                            }
                            else{
                                not_in = true;
                                if(abs(asteroids[i]) == abs(res[j])){
                                    res.pop_back();
                                }
                                break;
                            }
                        }
                        else
                            break;
                    }
                    if(!not_in)
                        res.push_back(asteroids[i]);
                }
            }
    
            return res;
        }
    };