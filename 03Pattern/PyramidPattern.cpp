#include<iostream>
using namespace std;

int main(){
    int n = 8;

    for(int i = 0; i < n; i++){
        // spaces: n - i - 1
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        // numbers increasing from 1 to i+1
        for(int j = 1; j <= i + 1; j++){
            cout << j;
        }

        // numbers decreasing from i to 1
        for(int j = i; j > 0; j--){
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
