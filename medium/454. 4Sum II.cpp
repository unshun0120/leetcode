class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> map;    //key=a+b的值，value=(a+b)出現過的次數
        int count=0;

        for(int a : nums1){
            for(int b : nums2){
                map[a+b]++;
            }
        }

        //根據map中(a+b)的值，去nums3和nums4中找是否有(0-(c+d))的值
        //這樣就能使nums1+nums2+nums3+nums4的值合為0
        for(int c : nums3){
            for(int d : nums4){
                int target = 0 - (c + d);
                if(map.find(target) != map.end()){
                    count += map[target];
                }
            }
        }

        return count;
    }
};