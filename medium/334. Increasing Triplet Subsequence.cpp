// 從左掃到右去看紀錄並持續更新first(最小)和second(次小)
// 一找到比second大的就return true

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long long first, second;
        bool findSec=false;
        
        first = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > first && !findSec){
                second = nums[i];
                findSec = true;
            }
            else if( nums[i] < first){
                first = nums[i];
            }
            else if( nums[i] < second && nums[i] > first && findSec)
                second = nums[i];
            else if( nums[i] > second && findSec)
                return true;
        }

        return false;
    }
};