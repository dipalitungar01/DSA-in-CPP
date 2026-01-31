#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year > 0) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            cout << "YES it is leap year   ";
        else
            cout << "NO it is not leap year";
    } else {
        cout << "NO is is not leap year";
    }

    return 0;
}
