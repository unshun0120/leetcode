class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        vector<double> temp;
        temp.push_back(celsius + 273.15);   //Kelvin
        temp.push_back(celsius * 1.8 + 32); //fahrenheit

        return temp;
    }
};
