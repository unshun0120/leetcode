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
            for( int i = ptr; i <= size; i++ ){     //�s��� �Y�S���J��Ŧr��N�~��s �s�ilist
                if( arr[i] != "" ){
                    list.push_back(arr[i]);
                    count++;        //����count -> ptr�n���h��
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
