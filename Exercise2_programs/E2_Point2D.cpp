#include <iostream>
#include <cmath>    // for sqrt and pow
using namespace std;

class Point2D {
private:
    double x;   // x-coordinate
    double y;   // y-coordinate

public:
    // Constructor to initialize point
    Point2D(double xVal = 0, double yVal = 0) {
        x = xVal;
        y = yVal;
    }

    // Set new values of x and y
    void set(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // Distance from origin (0,0)
    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }

    // Distance from another point
    double distanceFrom(const Point2D& other) {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }

    // Translate the point
    void translate(double dx, double dy) {
        x = x + dx;
        y = y + dy;
    }

    // Print point
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};
int main() {

  // Create points
    Point2D p1(3, 4);
    Point2D p2(6, 8);
    Point2D p3;

 // Print points
    cout << "Point p1 = ";
    p1.print();
    cout << endl;

    cout << "Point p2 = ";
    p2.print();
    cout << endl;

    cout << "Point p3 = ";
    p3.print();
    cout << endl;

// Distance from origin
    cout << "Distance of p1 from origin = "
         << p1.distanceFromOrigin() << endl;

// Distance between points
   cout << "Distance between p1 and p2 = "
          << p1.distanceFrom(p2) << endl;

// Translate p1
    p1.translate(2, -1);
    cout << "p1 after translation = ";
    p1.print();
    cout << endl;

 // Set new values for p3
    p3.set(1, 2);
    cout << "p3 after set = ";
    p3.print();
    cout << endl;

    return 0;
}




