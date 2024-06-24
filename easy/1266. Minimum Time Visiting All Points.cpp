class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int i, j, cur_x, cur_y, next_x, next_y, temp, count=0, dif_x, dif_y;

        for( i = 0; i < points.size()-1; i++ ){
            cur_x = points[i][0]; cur_y = points[i][1];
            next_x = points[i+1][0]; next_y = points[i+1][1];
            dif_x = abs(next_x - cur_x);
            dif_y = abs(next_y - cur_y);
            if( dif_x < dif_y ){
                temp = abs(next_x - cur_x);
                count += temp;
                if( abs(cur_y + temp - next_y) < abs(cur_y - temp - next_y) ) 
                    count += abs(cur_y + temp - next_y);
                else
                    count += abs(cur_y - temp - next_y);
                cout << temp << " " << count << endl;
            }
            else{
                temp = abs(next_y - cur_y);
                count += temp;
                if( abs(cur_x + temp - next_x) < abs(cur_x - temp - next_x) ) 
                    count += abs(cur_x + temp - next_x);
                else
                    count += abs(cur_x - temp - next_x);
                cout << temp << " " << count << endl;
            }
            
        }

        return count;
    }
};
