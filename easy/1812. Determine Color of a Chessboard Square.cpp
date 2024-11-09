class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if( coordinates[0] % 2 == 0 && coordinates[1] % 2 == 0 ||   //璝ダASCII琌案计计琌案计玥琌balck
            coordinates[0] % 2 != 0 && coordinates[1] % 2 != 0 )    //璝ダASCII琌计计琌计玥琌balck
            return false;
        else
            return true;
    }
};
