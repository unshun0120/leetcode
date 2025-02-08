class Solution {
    public:
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            vector<vector<int>> answer;
            vector<int> temp;
            int i, j, curr_num;
            set<int> set1(nums1.begin(), nums1.end());
            set<int> set2(nums2.begin(), nums2.end());
    
            // 檢查nums1裡的數字有沒有出現在nums2中
            for(i = 0; i < set1.size(); i++){
                // Accesing the element at index i
                curr_num = *next(set1.begin(), i);
    
                if(!set2.count(curr_num)){
                    temp.push_back(curr_num);
                }
            }
            answer.push_back(temp);
            temp.clear();
    
            // 檢查nums2裡的數字有沒有出現在nums1中
            for(i = 0; i < set2.size(); i++){
                curr_num = *next(set2.begin(), i);
                
                if(!set1.count(curr_num)){
                    temp.push_back(curr_num);
                }
            }
            answer.push_back(temp);
            temp.clear();
    
            return answer;  
        }
    };