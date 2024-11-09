class ParkingSystem {
public:
    int bigsize, medsize, smasize;
    ParkingSystem(int big, int medium, int small) {
        bigsize = big;
        medsize = medium;
        smasize = small;
    }
    
    bool addCar(int carType) {
        if( carType == 1 ){
            if( bigsize == 0 )  
                return false;
            else{
                bigsize--;
                return true;
            }
        }
        else if( carType == 2 ){
            if( medsize == 0 )  
                return false;
            else{
                medsize--;
                return true;
            }
        }
        else{
            if( smasize == 0 )  
                return false;
            else{
                smasize--;
                return true;
            }
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
