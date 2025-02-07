#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  /* Generating Random value

  #include <cstdlib>

  #include <ctime>

  int numbers = {1'000'000};
  srand(time(0));

  const short minValue {1},maxValue {6};
  short random = (rand() % (maxValue - minValue + 1) ) + minValue;
  short random2 = (rand() % (maxValue - minValue + 1) ) + minValue;

  cout << "Rolled Dice : " << random << endl;
  cout << "Rolled Dice : " << random2;

  */

  /* Formating Code

  #include <iomanip>

  cout << left;
  cout << setw(10) << "Spring" << setw(10) << "Nice" << endl;
  cout << setw(10) << "Summer" << setw(10) << "Hot";

  cout << fixed << setprecision(3) << 16.343426 << endl
  << 1945.00832424;


  cout << left;
  cout << setw(10) << "Course" << setw(10) << "Students" << endl;
  cout << setw(10) << "C++" << setw(10) << right << 100 << endl;
  cout << setw(10) << "Javascript" << setw(10) << right << 50;
   */

  /* Datatype size and limits

  cout << sizeof(short);

  #include <limits>

  cout << numeric_limits<int>::min() << endl;
   cout << numeric_limits<double>::min() << endl;
   cout << numeric_limits<long long>::max() << endl;
  */

  /* Boolean value

   bool isResult = false;

  cout <<boolalpha << isResult;
   */

  /*
  Char and string

char ch = 'b';
cout << ch;
cout << +ch; // numberical repersentation of b

string street, city, state, zip;
  cout << "Enter Your Street : ";
  getline(cin, street);
  cout << "Enter You City : ";
  getline(cin, city);
  cout << "Enter You State : ";
  getline(cin, state);
  cout << "Enter You Zip : ";
  getline(cin, zip);

cout << endl;

 cout << left;
  cout << setw(10) << street  << endl;
  cout << setw(15) << city << setw(15) << state << setw(10) << zip << endl;


  */

 /*
 Woriking with array
 */

string arrNames[3] = {"Sam","Arvind","Vijay"};

cout << arrNames[0];

  cout << endl
       << endl;

  return 0;
}