#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int radius;
    const double pi = 3.14;
    cout << "Enter the radius : ";
    cin >> radius;
    cout << "Area of circle : " << pi * pow(radius, 2);


    cout << endl << endl;
    return 0;
}