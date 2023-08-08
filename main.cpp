#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

double euro, ron, rate = 4.95;
const int COLM1 = 35;
const int COLM2 = 15;

int main()
{
    cout << fixed << setprecision(2);

    cout << "Welcome to C++ Currency Converter";
    cout << "\n--------------------------- " << "\n\n";

    cout<< setw(COLM1) << left <<  "Enter a value(Euro) to be converted in RON: ";
    cin >> euro;
    cout << "\n";

    cout << setw(COLM1) << left << "Euro: ";
    cout << setw(COLM2) << right << euro << "\n";

    cout << setw(COLM1) << left << "Conversion rate(per Euro): ";
    cout << setw(COLM2) << right << rate << "\n";

    ron = euro * rate;

    cout << setw(COLM1) << left << "RON: ";
    cout << setw(COLM2) << right << ron << "\n";

    cout << "\n--------------------------- " << endl;
    cout << "\nEnd of Rate Converter" << endl;

    return 0;
}
