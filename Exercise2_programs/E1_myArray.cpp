#include <iostream>
using namespace std;

class MyArray {
private:
    int* arr;       // dynamic array
    int capacity;   // maximum size
    int size;       // current elements

public:
    // Constructor
    MyArray(int cap) {
        capacity = cap;
        size = 0;
        arr = new int[capacity];
    }

    // Destructor
    ~MyArray() {
        delete[] arr;
    }

    // Insert value at given index
    void insertAt(int index, int value) {
        if (index < 0 || index > size || size == capacity) {
            cout << "Invalid index or array full\n";
            return;
        }

        // shift elements right
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = value;
        size++;
    }

    // Remove value at given index
    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index\n";
            return;
        }

        // shift elements left
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    // Reverse the array
    void reverse() {
        int i = 0, j = size - 1;
        while (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    // Selection sort (ascending)
    void sort() {
        for (int i = 0; i < size - 1; i++) {
            int min = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[min])
                    min = j;
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    // Display array
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main() {
    MyArray arr(50);

    for(int i = 0; i < 10; i++) {
        arr.insertAt(i, 2*i);
    }

    cout << "After insertion:\n";
    arr.display();

    arr.remove(3);
    cout << "After remove:\n";
    arr.display();

    arr.reverse();
    cout << "After reverse:\n";
    arr.display();

    arr.sort();
    cout << "After sort:\n";
    arr.display();

    return 0;
}


