//Q1.calculate sum of numbers from 1 to n. //n = parameter

#include <iostream>
using namespace std;


int sumN(int n){
    int sum =0;

    for(int i=1; i<=n; i++){
        sum += i;
    }

    return sum;
}

int main(){
    cout <<sumN(5) <<endl;
    cout <<sumN(10) <<endl;
    return 0;
}