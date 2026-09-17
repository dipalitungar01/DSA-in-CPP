#include<iostream>
#include<climits>
using namespace std;

void changeArr(int arr[], int size){
    cout << "in function\n";
   for(int i=0; i<size; i++){
    arr[i] = 2 * arr[i];
   }
}

int linearSearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
      if(arr[i] == target){ //FOUND
        return i;
      }
    }
    return -1;//NOT FOUND
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int Sz = 7;
    int target = 5;

    cout << linearSearch(arr, Sz, target) <<endl;
    return 0;
}