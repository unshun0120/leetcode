class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                if(i-1 >= 0 && flowerbed[i-1] == 1 || 
                    i+1 < flowerbed.size() && flowerbed[i+1] == 1)  
                    continue;

                flowerbed[i] = 1;
                n--;     
            }
            /*for(int j = 0; j < flowerbed.size(); j++)
                cout << flowerbed[j] << " ";
            cout << endl;*/

            if(n <= 0)
                return true; 
        }

        return false;
    }
};