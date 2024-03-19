#include <iostream>
#include <cstring>
using namespace std;
class Candy {
public:
    int price;
    int amount;
    char* name;

    Candy() : price(10), amount(20) {
        name = new char[strlen("strawberry") + 1];
        strcpy(name, "strawberry");
    }

    Candy(int p, int a, const char* n) : price(p), amount(a) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Candy(const Candy &other) : price(other.price), amount(other.amount) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    ~Candy() {
        delete[] name;
    }
};

int main() {
    int choice;
    cout << "Which constructor to use (1: default, 2: parameterized, 3: copy)?" << endl;
    cin >> choice;

    if (choice == 1) {
        Candy c1;
        cout << "c1: name-" << c1.name << "; price-" << c1.price << "; amount-" << c1.amount << endl;
    }
    else if (choice == 2) {
        char input_name[100];
        int input_price, input_amount;

        cout << "Enter name:" << endl;
        cin.ignore(); 
        cin.getline(input_name, 100);

        cout << "Enter price:" << endl;
        cin >> input_price;

        cout << "Enter amount:" << endl;
        cin >> input_amount;

        Candy c1(input_price, input_amount, input_name);
        cout << "c1: name-" << c1.name << "; price-" << c1.price << "; amount-" << c1.amount << endl;
    }
    else if (choice == 3) {
        char input_name[100];
        int input_price, input_amount;

        cout << "Enter name:" << endl;
        cin.ignore(); 
        cin.getline(input_name, 100);

        cout << "Enter price:" << endl;
        cin >> input_price;

        cout << "Enter amount:" << endl;
        cin >> input_amount;

        Candy c1(input_price, input_amount, input_name);
        Candy c2(c1); 

        cout << "c1: name-" << c1.name << "; price-" << c1.price << "; amount-" << c1.amount << endl;
        cout << "c2: name-" << c2.name << "; price-" << c2.price << "; amount-" << c2.amount << endl;
    }

    return 0;
}
 
