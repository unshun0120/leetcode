class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i, j, index;
        vector<int> res;
        bool find = false;

        for( i = 0; i < nums1.size(); i++ ){
            index = 0;
            find = false;
            for( j = 0; j < nums2.size(); j++ ){
                if( nums1[i] == nums2[j] ){
                    index = j;
                    find = true;
                }
                    
                if( nums1[i] < nums2[j] && j > index && find ){
                    res.push_back( nums2[j] );
                    break;
                }
            }
            if( j == nums2.size() )
                res.push_back( -1 );
        }

        return res;
    }
};
