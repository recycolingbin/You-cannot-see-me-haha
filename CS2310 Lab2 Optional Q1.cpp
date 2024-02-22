#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, c = 0;
    int b[10];
    cout<<"Enter a number of four digits: "<<endl;
    cin >> a;

    for(int i = 0; i < 10; i++) {
        b[i] = static_cast<int>(a) / static_cast<int>(pow(10, i)) % 10;
    }
  
    for(int i = 0; i < 10; i++) {
        c += pow(b[i], 2);
    }
    cout <<"Sum of digits is: "<< c << endl;
    return 0;
}