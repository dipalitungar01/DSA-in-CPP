#include <iostream>
using namespace std;

// Matrix class using one-dimensional array                                                                                                                                             
class Matrix {
private:
    int rows;      // number of rows                                                                                                                                                    
    int cols;      // number of columns                                                                                                                                                 
    float* data;   // one-dimensional array to store matrix elements                                                                                                                    

public:
  // Constructor: allocate memory                                                                                                                                                
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new float[rows * cols];

        // initialize all elements to 0                                                                                                                                                 
        for (int i = 0; i < rows * cols; i++)
            data[i] = 0;
    }

// Destructor: free allocated memory                                                                                                                                                   

    ~Matrix() {
        delete[] data;
    }

    // Set value at position (i, j)                                                                                                                                                     

    void set(int i, int j, float value) {
        if (i >= 0 && i < rows && j >= 0 && j < cols)
            data[i * cols + j] = value;
    }

   // Get value at position(i,j)                                                                                                                                                     
    float get(int i, int j) const {
        if (i >= 0 && i < rows && j >= 0 && j < cols)
            return data[i * cols + j];
        return 0;
    }
 
 // Print matrix                                                                                                                                                                     
    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i * cols + j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a 2x3 matrix 
                                                                                                                                                                 
    Matrix m(2, 3);

    // Set matrix value                                                                                                                                                                
    m.set(0, 0, 1.1);
    m.set(0, 1, 2.2);
    m.set(0, 2, 3.3);
    m.set(1, 0, 4.4);
    m.set(1, 1, 5.5);
    m.set(1, 2, 6.6);

    // Print matrix                                                                                                                                                                     
    cout << "Matrix elements:" << endl;
    m.print();

    // Access a single element                                                                                                                                                          
    cout << "Element at (1,2) = " << m.get(1, 2) << endl;

    return 0;
}


