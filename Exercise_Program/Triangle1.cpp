#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "YES\n";

        if (a == b && b == c)
            cout << "Equilateral Triangle";
        else if (a == b || b == c || a == c)
            cout << "Isosceles Triangle";
        else
            cout << "Scalene Triangle";
    }
    else {
        cout << "NO";
    }

    return 0;
}
