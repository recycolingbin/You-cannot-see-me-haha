#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double celsius, fahrenheit,kelvin;
    cout << "Enter temperature in Centigrade: "<<endl;
    cin >> celsius;
    fahrenheit = (celsius * 9.0/5.0) + 32;
    kelvin = (celsius+273.15);
    cout << "Temperature in Fahrenheit is: " << fixed << setprecision(2) << fahrenheit << endl;
    cout << "Temperature in Kelvin is: " << fixed << setprecision(2) << kelvin<< endl;

    return 0;
}