#include <iostream>
using namespace std;

int main() {
    double a, x;
    cin >> a;

    x = a;   // initial guess

    for (int i = 0; i < 10; i++) {
        x = 0.5 * (x + a / x);
    }

    cout << x;
    return 0;
}
