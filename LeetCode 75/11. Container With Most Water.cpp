class Solution {
public:
    int maxArea(vector<int>& height) {
        int left, right, area, max=0;
        
        left = 0;
        right = height.size()-1;

        while(left < right){
            area = (right-left) * min(height[right], height[left]);
            if(area > max)
                max = area;
            // 水的容量取決於較短的那條線，如果想要找到更大的容量，
            // 應該嘗試移動較短的那條線，希望找到更高的線
            if(height[left] < height[right])
                left++;
            else
                right--;
        }

        return max;
    }
};