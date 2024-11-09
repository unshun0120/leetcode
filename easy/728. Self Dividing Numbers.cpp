class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int i, temp, div;
        vector<int> ans;
        bool find=true;

        for( i = left; i <= right; i++ ){
            find = true;    //若有找到無法整除 -> find = false
            temp = i;   
            while( temp ){
                div = temp % 10;
                if( div != 0 && i % div != 0 || div == 0 ){
                    find = false;
                    break;
                } 
                temp /= 10;
            }
            if( find )
                ans.push_back(i);
        }

        return ans;
    }
};
