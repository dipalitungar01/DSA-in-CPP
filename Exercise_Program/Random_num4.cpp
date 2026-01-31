#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    int guess;  
    srand(time(0));
    int X = rand() % 100 + 1;
 
    cout <<"Guess the number between 1 and 100:\n";
    
    while (cin >> guess){

        if (guess > X){

        cout << "Too high\n";

       }
         else if (guess < X)
      {
            cout << "Too low\n";
       }
        else 
       {
            cout << " Your entered number is Correct..";
            break;
        }
    }
    return 0;
}
