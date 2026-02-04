#include <iostream>
#include <cmath>
using namespace std;

// Class to represent a Polynomial
class Polynomial {
private:
    int degree;        // Degree of the polynomial
    double* coeff;     // Array to store coefficients

public:
    // Constructor: allocates memory and initializes coefficients to 0
    Polynomial(int deg) {
        degree = deg;
        coeff = new double[degree + 1];
        for (int i = 0; i <= degree; i++)
            coeff[i] = 0;
    }

    // Destructor: frees dynamically allocated memory
    ~Polynomial() {
        delete[] coeff;
    }

    // Sets the coefficient of x^power
    void setCoefficient(int power, double value) {
        if (power >= 0 && power <= degree)
            coeff[power] = value;
    }

    // Evaluates the polynomial for a given value of x
    double evaluate(double x) {
        double result = 0;
        for (int i = 0; i <= degree; i++)
            result += coeff[i] * pow(x, i);
        return result;
    }

    // Adds the current polynomial with another polynomial
    Polynomial add(const Polynomial& other) {
        int maxDeg = (degree > other.degree) ? degree : other.degree;
        Polynomial result(maxDeg);

        for (int i = 0; i <= maxDeg; i++) {
            double c1 = (i <= degree) ? coeff[i] : 0;
            double c2 = (i <= other.degree) ? other.coeff[i] : 0;
            result.coeff[i] = c1 + c2;
        }
        return result;
    }

    // Prints the polynomial in readable form
    void print() {
        for (int i = degree; i >= 0; i--) {
            if (coeff[i] != 0) {
                if (i != degree) cout << " + ";
                cout << coeff[i];
                if (i > 0) cout << "x";
                if (i > 1) cout << "^" << i;
            }
        }
        cout << endl;
    }
};

int main() {
    // Create first polynomial: P1(x) = 3x^2 + 2x + 1
    Polynomial p1(2);
    p1.setCoefficient(0, 1);
    p1.setCoefficient(1, 2);
    p1.setCoefficient(2, 3);

    // Create second polynomial: P2(x) = 4x^2 + x + 2
    Polynomial p2(2);
    p2.setCoefficient(0, 2);
    p2.setCoefficient(1, 1);
    p2.setCoefficient(2, 4);

    // Print both polynomials
    cout << "P1(x) = ";
    p1.print();

    cout << "P2(x) = ";
    p2.print();

    // Add the two polynomials
    Polynomial sum = p1.add(p2);
    cout << "P1 + P2 = ";
    sum.print();

    // Evaluate P1 at x = 2
    cout << "P1(2) = " << p1.evaluate(2) << endl;

    return 0;
}

