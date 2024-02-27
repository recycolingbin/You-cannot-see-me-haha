#include <iostream>
#include <string>
using namespace std;

int main(){
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen","Eighteen", "Nineteen"};
    string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    int a;
    cout << "Enter the integer number:" << endl;
    cin >> a;

    if(a < 10){ 
        cout << ones[a];
    } else if (a < 20){ 
        cout << teens[a-11];
    } else { 
        cout << tens[a/10] << " " << ones[a%10];
    }
}
