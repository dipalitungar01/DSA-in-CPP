#include <iostream>
using namespace std;

int main() {
    int n, digit;

    cout << "Enter a number: ";
    cin >> n;


    while (n > 0) {
        digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
    return 0;
  }
