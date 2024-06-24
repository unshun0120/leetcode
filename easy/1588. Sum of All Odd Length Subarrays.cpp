class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0, i, j, offset=0;  //offset->一次要跳多少  0->不動->1格 2->跳2格->共3格

        while( offset < arr.size() ){   //若offset沒超過範圍就繼續+
            for( i = 0; i < arr.size(); i++ ){  
                if( (i+offset) < arr.size() ){  //若現在的位置+offset沒超過範圍
                    for( j = 0; j <= offset; j++ )   
                        sum += arr[i+j];
                }
            }
            offset+=2;
        }
        
        return sum;
    }
};
