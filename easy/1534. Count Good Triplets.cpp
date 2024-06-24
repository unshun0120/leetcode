class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int i, j, k, count=0;

        for( i = 0; i < arr.size(); i++ ){
            for( j = i+1; j < arr.size(); j++ ){
                for( k = j+1; k < arr.size(); k++ ){
                    if( abs(arr[i]-arr[j]) <= a && abs(arr[j]-arr[k]) <= b && abs(arr[i]-arr[k]) <= c )
                        count++;
                }
            }
        }

        return count;
    }
};
