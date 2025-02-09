class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int lens1=str1.length(), lens2=str2.length();
        int gcd, temp1=lens1, temp2=lens2;
        string x="";

        // 檢查str1+str2跟str2+str1有沒有相等
        // 如果都是由同一個單位組成那合起來應該要是一樣的
        string str12=str1+str2, str21=str2+str1; 
        if(str12 != str21)
            return "";

        // lens GCD
        while(temp1 != 0 && temp2 != 0){
            if(temp1 > temp2)
                temp1 %= temp2;
            else
                temp2 %= temp1;
        }
        if(temp1 == 0)
            gcd = temp2;
        else
            gcd = temp1;
        
        for(int i = 0; i < gcd; i++){
            if(str1[i] == str2[i])
                x += str1[i];
            else{
                x = "";
                break;
            }
        }


        return x;
    }
};