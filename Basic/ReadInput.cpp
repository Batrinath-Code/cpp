#include<iostream>
using namespace std;
int main(){
    int celsius,fahrenheit;
    cout << "Enter a celsius value : ";
    cin >> celsius;

    cout <<" Fahrenheit : " << (celsius * 1.8) + 32;

    cout << endl << endl ;
    return 0;
}