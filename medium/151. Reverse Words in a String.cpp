class Solution {
public:
<<<<<<< HEAD
    void wordReverse(string& s, int left, int right){
        int i, j;

        for(i = left, j = right; i < j; i++, j--){
            swap(s[i], s[j]);
        }

    }
    string reverseWords(string s) {
        int i;

        //去掉句子一開始的空格
        if(s[0] == ' '){
            for(i = 1; i < s.length(); i++){
                if(s[i] != ' '){
                    s.erase(0, i);
                    break;
                }
            }
        }
        cout << s << endl;
        //去掉句子最後面的空格
        if(s[s.length()-1] == ' '){
            for(i = s.length()-2; i >= 0; i--){
                if(s[i] != ' '){
                    s.erase(i+1, s.length()-i);
                    break;
                }
            }
        }
        cout << s << endl;
        //去掉字中間多餘的空格
        for(i = 0; i < s.length()-1; i++){
            if(s[i] == ' ' && s[i] == s[i+1]){
                s.erase(i, 1);
                i--;
            }
        }
        cout << s << endl;
        
        //把input句子reverse，再把每個單字個別reverse就得到結果
        wordReverse(s, 0, s.length()-1);
        cout << s << endl;
        int idx=0;    //紀錄要reverse單字的第一個字母的index
        for(i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                wordReverse(s, idx, i-1);
                idx = i+1;
            }
            if(i == s.length()-1){  //句子的最後一個單字要個別處理
                wordReverse(s, idx, i);
            }
        }
        

        return s;
=======
    string reverseWords(string s) {
        string temp="", ans="";
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == ' ' && temp != ""){
                reverse(temp.begin(), temp.end());
                ans += temp + " ";
                temp = "";
            }
            else if(s[i] != ' '){
                temp += s[i];
            }
        }
        reverse(temp.begin(), temp.end());
        ans += temp;
        // remove last charactor if exist a space
        if(ans[ans.length()-1] == ' ')
            ans.pop_back();

        return ans;
>>>>>>> cbc2563dc0d2012b4349b16b0241cd3467642ae6
    }
};