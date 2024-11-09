class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index;
        index = bfs(nums, target, 0, nums.size()-1);

        return index;
    }

    int bfs(vector<int>& nums, int target, int left, int right){
        int mid = (left + right)/2;

        if( left > right )
            return -1;
        if( nums[mid] == target )
            return mid;
        else if( nums[mid] < target )
            return bfs(nums, target, mid+1, right);
        else
            return bfs(nums, target, left, mid-1);
    }
};