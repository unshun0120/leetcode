class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if( coordinates[0] % 2 == 0 && coordinates[1] % 2 == 0 ||   //�Y�r����ASCII�O���ƥB�᭱�Ʀr�]�O���ƫh�Obalck
            coordinates[0] % 2 != 0 && coordinates[1] % 2 != 0 )    //�Y�r����ASCII�O�_�ƥB�᭱�Ʀr�]�O�_�ƫh�Obalck
            return false;
        else
            return true;
    }
};
