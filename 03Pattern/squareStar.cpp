#include<iostream>
using namespace std;

int main(){
    int n = 5;

    // for(int i=0; i<n; i++){//this loop start from 0
    for(int i=1; i<=n; i++){//outer
      
     // for(int j=0; j<n; j++){//this loop start from 0
        for(int j=1; j<=n; j++){//inner
           cout<< "*" << " ";
        }

        cout << endl;
    }
    
    return 0;
}