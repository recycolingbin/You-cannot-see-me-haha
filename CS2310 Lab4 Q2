#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

void sep(string str) {
    string name;
    string id;

    istringstream is(str);
    string word;

    while (is >> word) {
        bool hasname = false;
        bool hasid = false;
        for (char ch : word) {
            if (isalpha(ch)) {
                hasname = true;
            }
            if (isdigit(ch)) {
                hasid = true;
            }
        }

        if (hasname) {
            name += word + " ";
        }
        if (hasid) {
            id += word + " ";
        }
    }

    cout << "Student name is: " << name << endl;
    cout << "Student ID is: " << id << endl;
}

int main() {
    string str;
    cout << "Enter the student info:" << endl;
    getline(cin, str);
    sep(str);

    return 0;
}
