// Last updated: 7/2/2025, 11:49:25 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {celsius+273.15, celsius*1.80+32.00};
    }
};