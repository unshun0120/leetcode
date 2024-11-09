class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        int i;
        
        arr.push_back(first);
        for( i = 0; i < encoded.size(); i++ ){
            arr.push_back( arr[i]^encoded[i] );     //arr[i+1] = arr[i]^encoded[i]
        }

        return arr;
    }
};


