class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0, i, j, offset=0;  //offset->�@���n���h��  0->����->1�� 2->��2��->�@3��

        while( offset < arr.size() ){   //�Yoffset�S�W�L�d��N�~��+
            for( i = 0; i < arr.size(); i++ ){  
                if( (i+offset) < arr.size() ){  //�Y�{�b����m+offset�S�W�L�d��
                    for( j = 0; j <= offset; j++ )   
                        sum += arr[i+j];
                }
            }
            offset+=2;
        }
        
        return sum;
    }
};
