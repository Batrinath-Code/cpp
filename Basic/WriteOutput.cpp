#include <iostream>
using namespace std;
int main()
{
    double sales = 95000;
    cout << "Sales = " << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax 4% = " << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax 2% = " << countyTax << endl;

    cout << "Total Tax = " << stateTax + countyTax << endl;

    cout << endl
         << endl;
    return 0;
}