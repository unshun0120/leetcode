class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string arr1, arr2;
        int i, j;

        for( i = 0; i < word1.size(); i++ ){    //combine total strings in word1 into arr1
            for( j = 0; j < word1[i].size(); j++ ){
                arr1 += word1[i][j];
            }
        }

        for( i = 0; i < word2.size(); i++ ){    //combine total strings in word1 into arr2
            for( j = 0; j < word2[i].size(); j++ ){
                arr2 += word2[i][j];
            }
        }

        if( arr1 == arr2 )  
            return true;
        else
            return false;


    }
};
