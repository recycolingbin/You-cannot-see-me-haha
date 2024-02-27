#include <iostream>
#include <string>
using namespace std;

int main() {
    int num,num1,num2;
    cout << "Enter the number: " << endl;
    cin >> num;
    string numStr = to_string(num);
    if (numStr.length() % 2 == 0 && num != 2) {
        num1 = stoi(numStr.substr(numStr.length() / 2));
        cout << "The value of last " << numStr.length()/2 << " digits of "<<num<<" is: " << num1 << endl;
    } else if(numStr.length() == 1) {
        num1 = stoi(numStr.substr(numStr.length() / 2));
        cout << "The value of last " << numStr.length()/2+1 << " digit of "<<num<<" is: " << num1 << endl;
    }
    else {
        num2 =stoi(numStr.substr(numStr.length() / 2));
        cout << "The value of last " << numStr.length()/2+1 << " digits of "<<num<<" is: " << num2 << endl;
    
    }
}

