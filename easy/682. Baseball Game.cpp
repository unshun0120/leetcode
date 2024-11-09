class Solution {
public:
    int calPoints(vector<string>& operations) {
        int i, j, sum = 0;
        vector<int> record;

        for( i = 0; i < operations.size(); i++ ){
            if( operations[i] == "C" ){
                if( record.size() >= 1 )
                    record.pop_back();
            }
            else if( operations[i] == "D" ){
                int d;
                if( record.size() >= 1 ){
                    d = record[ record.size()-1 ];
                    record.push_back( 2*d );
                }
            }
            else if( operations[i] == "+" ){
                sum = 0;
                if( record.size() >= 1 ){
                    for( j = record.size()-1; j >= record.size()-2 && j >= 0; j-- ){
                        sum += record[j];
                    }
                    record.push_back( sum );
                }
            }
            else{
                int lens = operations[i].size();
                bool neg = false;
                
                if( operations[i][0] == '-' ){
                    neg = true;
                }

                if( !neg ){ //positive
                    sum = 0;
                    for( j = 0; j < lens; j++ ){
                        sum += ( ((int)operations[i][j]) - 48 ) * pow(10, lens-j-1);
                    }
                    record.push_back(sum);
                }
                else{
                    sum = 0;
                    for( j = 1; j < lens; j++ ){
                        sum += ( ((int)operations[i][j]) - 48 ) * pow(10, lens-j-1);
                    }
                    record.push_back(0-sum);
                }
            }
        }

        sum = 0;
        for( i = 0; i < record.size(); i++ ){
            sum += record[i];
        }

        return sum;
    }
};
