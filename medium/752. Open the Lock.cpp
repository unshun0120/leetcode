class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int step=-1;
        unordered_set<string> visited = { deadends.begin(), deadends.end() };  //�s�����չL�Mdeadends����
        queue<string> q; //�s�C�ӭn�ˬd����

        if( !visited.count( "0000" ) ){    //�ˬd0000�O�_���bdeadends�� �S���N���queue
            q.push( "0000" );
            visited.insert("0000");
        }

        //BFS
        while( !q.empty() ){
            step++;
            for( int i = q.size()-1; i >= 0; i-- ){
                string curr = q.front();   //���X�n�ˬd����
                q.pop();

                if( curr == target )
                    return step;

                for( int idx = 0; idx < 4; idx++ ){ //idx�O�ĴX��ƭn��+1 or -1
                    //���idx�쪺��ư�+1
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

                    //���idx�쪺��ư�-1
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
