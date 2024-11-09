class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int i, j, sum=0;
        
        for( i = 0; i < seats.size(); i++ ){
            for( j = 0; j < i; j++ ){
                if( seats[j] > seats[i] )  swap( seats[i], seats[j] );
                if( students[j] > students[i] ) swap( students[i], students[j] );
            }
        }

        for( i = 0; i < seats.size(); i++ ){
            sum += abs(seats[i] - students[i]);
        }

        return sum;
    }
};
