#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string merge(const string&s1, const string&s2){
    string merged = s1 + s2;
    sort(merged.begin(),merged.end());
    return merged;
}
int main(){
    string input1, input2;
    cout << "Input String 1: " << endl;
    cin >> input1;
    cout << "Input String 2: " << endl;
    cin >> input2;
    string merged = merge(input1, input2);
    cout << "Merged String: " << merged << endl;
    return 0;
}