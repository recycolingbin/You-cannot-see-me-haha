#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    int temp;
    cout << "Enter the two integers:"<< endl;
    cin >> a >> b;
    c = a;
    d = b;
    while(b != 0){
        temp=b;
        b = a % b;
        a = temp;
    }
    cout << cout << "The GCD of " << c <<" and "<< d << " is: " << a << endl;
    cout << "The LCM of " << c <<" and "<< d << " is: " << d * (c / a) << endl;
}
