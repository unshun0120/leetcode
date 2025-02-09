class Solution {
public:
    int maxVowels(string s, int k) {
        int sum=0, max=0;

        for(int i = 0; i < k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                sum++;
        }
        max = sum;

        for(int i = k; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                sum++;
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u')
                sum--;
            
            if(sum > max){
                max = sum;
            }
        }

        return max;
    }
};