#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2, a1, b1, a2, b2;
    cout << "Enter the points on the first line: "<<endl;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Enter the points on the second line: "<<endl;
    cin >> a1 >> b1 >> a2 >> b2;
    double slope1 = static_cast<double>(y2 - y1) / (x2 - x1);
    double slope2 = static_cast<double>(b2 - b1) / (a2 - a1);
    if (slope1 != slope2) {
        cout << "The two straight lines have an intersection." << endl;
    } else {
        cout << "The two straight lines have no intersection." << endl;
    }
    return 0;
}