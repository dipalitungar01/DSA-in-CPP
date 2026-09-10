#include <iostream>
using namespace std;

//min of 2 number
int minOfTwo(int a, int b){ //parameters
 if(a<b){
    return a;
 }else{
    return b;
 }
}

int main(){
    cout << " min = " << minOfTwo(5 , 3) << endl; //arguments

   
    return 0;
}