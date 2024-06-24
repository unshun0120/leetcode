class Solution {
public:
    string defangIPaddr(string address) {
        int i;
        string defIP;

        for( i = 0; i < address.length(); i++ ){
            if( address[i] == '.' )
                defIP += "[.]";
            else
                defIP += address[i];
        }

        return defIP;
    }
};
