#include <iostream>
#include <string>
using namespace std;

int pos(string w, string pat) {
    size_t found = w.rfind(pat);
    return (found);
}

int main() {
    string w, pat;
    cout << "The word and chars are: "<< endl;
    cin >> w >> pat;
    int result = pos(w, pat);
    cout << "The last position of " << pat << " is: " << result << endl;
}
