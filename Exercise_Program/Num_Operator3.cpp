#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cin >> a >> b >> op;

    if (op == '+')
        cout << a + b;
    else if (op == '-')
        cout << a - b;
    else if (op == '*')
        cout << a * b;
    else if (op == '/')
        cout << a / b;
    else
        cout << "Invalid operator";

    return 0;
}
