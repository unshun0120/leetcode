class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> occur;
        int i, j;

        sort(arr.begin(), arr.end());
        for(i = 0; i < arr.size(); i++){
            for(j = i+1; j < arr.size(); j++){
                if(arr[j] != arr[i]){
                    if(occur.count(j-i))
                        return false;
                    
                    occur.insert(j-i);
                    i = j-1;
                    break;
                }
            }
            // 排序後最後一種數字的檢查
            if(j == arr.size()){
                if(occur.count(j-i))
                    return false;
                occur.insert(j-i);
                break;
            }
        }

        return true;
    }
};