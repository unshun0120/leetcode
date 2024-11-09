class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int step=-1;
        unordered_set<string> visited = { deadends.begin(), deadends.end() };  //存有嘗試過和deadends的數
        queue<string> q; //存每個要檢查的數

        if( !visited.count( "0000" ) ){    //檢查0000是否有在deadends裡 沒有就放到queue
            q.push( "0000" );
            visited.insert("0000");
        }

        //BFS
        while( !q.empty() ){
            step++;
            for( int i = q.size()-1; i >= 0; i-- ){
                string curr = q.front();   //取出要檢查的數
                q.pop();

                if( curr == target )
                    return step;

                for( int idx = 0; idx < 4; idx++ ){ //idx是第幾位數要做+1 or -1
                    //對第idx位的位數做+1
                    string add = curr;
                    if( add[idx] == '9' ){
                        add[idx] = '0';
                    }
                    else{
                        add[idx]++;
                    }

                    if( !visited.count(add) ){
                        q.push(add);
                        visited.insert(add);
                    }

                    //對第idx位的位數做-1
                    string sub = curr;
                    if( sub[idx] == '0' ){
                        sub[idx] = '9';
                    }
                    else{
                        sub[idx]--;
                    }

                    if( !visited.count(sub) ){
                        q.push(sub);
                        visited.insert(sub);
                    }

                    cout <<add << " " << sub << endl;
                }
            }
        }

        return -1;
    }

};
