class OrderedStream {
public:
    int ptr, size;
    OrderedStream(int n) {
        ptr = 1;
        size = n;
    }
    string arr[1000];    
    vector<string> insert(int idKey, string value) {
        vector<string> list;
        int count=0;
        if( idKey == ptr ){     //idKey == ptr
            arr[idKey] = value;     //store data
            for( int i = ptr; i <= size; i++ ){     //存資料 若沒有遇到空字串就繼續存 存進list
                if( arr[i] != "" ){
                    list.push_back(arr[i]);
                    count++;        //紀錄count -> ptr要跳多少
                }
                else
                    break;
            }
            ptr+=count; 
        }
        else{       //idKey != ptr -> store data 
            arr[idKey] = value;
        }

        return list;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
