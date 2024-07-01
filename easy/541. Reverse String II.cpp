class Solution {
public:
    void Part_reverse(string& s, int left, int right){
        int i, j;

        for(i = left, j = right; i < j; i++, j--){
            swap(s[i], s[j]);
        }
    }
    string reverseStr(string s, int k) {
        int i, j;

        for(i = 0; i < s.length(); i+=2*k){
            if(i + k > s.length()){
                Part_reverse(s, i, s.length()-1);
            }
            else{
                Part_reverse(s, i, i+k-1);
            }
            cout << s << endl;
        }

        return s;
    }
};