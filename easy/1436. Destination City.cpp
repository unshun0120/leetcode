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

        for( i = 0; i < paths.size(); i++ ){    //計算出現的次數
            dic[ paths[i][0] ]++;
            dic[ paths[i][1] ]++;
        }

        for( i = 0; i < paths.size(); i++ ){    //若前面字串出現2次且後面字串只出現過1次 or 兩個都只出現1次則後面字串為destination 
            arr = paths[i][0];
            iter1 = dic.find( paths[i][0] );
            iter2 = dic.find( paths[i][1] );
            if( iter1->second == 2 && iter2->second == 1 || iter1->second == 1 && iter2->second == 1 )
                ans += iter2->first;
        }

        return ans;
    }
};
