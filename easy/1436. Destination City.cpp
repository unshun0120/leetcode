class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int i, j;
        string arr="", ans="";
        map<string, int> dic;
        map<string, int>::iterator iter1, iter2;

        for( i = 0; i < paths.size(); i++ ){    //initial
            dic[ paths[i][0] ] = 0;
        }

        for( i = 0; i < paths.size(); i++ ){    //�p��X�{������
            dic[ paths[i][0] ]++;
            dic[ paths[i][1] ]++;
        }

        for( i = 0; i < paths.size(); i++ ){    //�Y�e���r��X�{2���B�᭱�r��u�X�{�L1�� or ��ӳ��u�X�{1���h�᭱�r�ꬰdestination 
            arr = paths[i][0];
            iter1 = dic.find( paths[i][0] );
            iter2 = dic.find( paths[i][1] );
            if( iter1->second == 2 && iter2->second == 1 || iter1->second == 1 && iter2->second == 1 )
                ans += iter2->first;
        }

        return ans;
    }
};
