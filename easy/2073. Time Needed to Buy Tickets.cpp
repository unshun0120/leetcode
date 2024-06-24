class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i, time=0, find=false;

        while( !find ){
            for( i = 0; i < tickets.size(); i++ ){
                if( tickets[i] != 0 ){
                    tickets[i]--;
                    time++;
                    if( tickets[k] == 0 ){
                        find = true;
                        break;
                    }
                }
            }
            for( i = 0; i < tickets.size(); i++ ){
                cout << tickets[i] << " ";
            }
            cout << "t=" << time;
            cout << endl;
            if( tickets[k] == 0 ){
                find = true;
            }
        }

        return time;
    }
};
