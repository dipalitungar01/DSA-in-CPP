#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "enter a character :";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << " lower case letter\n";
    } else {
        cout << " upper case letter\n";
    }
}
