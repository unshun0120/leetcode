class Solution {
public:
    //KMP
    vector<int> prefixFunc(string needle){
        int i, k=0;
        vector<int> prefix;
        prefix.push_back(0);
        for(i = 1; i < needle.length(); i++){
            while(k > 0 && needle[k] != needle[i])
                k = prefix[k-1];
            if(needle[k] == needle[i])
                k++;
            prefix.push_back(k);
        }

        return prefix;
    }
    int strStr(string haystack, string needle) {
        int i, k=0;
        vector<int> prefix;
        prefix = prefixFunc(needle);
        for(i = 0; i < haystack.length(); i++){
            while(k > 0 && needle[k] != haystack[i])
                k = prefix[k-1];
            if(needle[k] == haystack[i])
                k++;
            if(k == needle.length()){
                return i-needle.length()+1;
            }
        }

        return -1;
    }
};