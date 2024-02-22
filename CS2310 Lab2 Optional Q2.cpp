#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Centigrade: "<<endl;;
    cin >> celsius;
    fahrenheit = (celsius * 9.0/5.0) + 32;
    cout << "Temperature in Fahrenheit is: " << fixed << setprecision(2) << fahrenheit << endl;
    return 0;
}