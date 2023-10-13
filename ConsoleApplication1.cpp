#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double n,r,slice,pi=3.14;
    cout << "Enter the pizza diameter (in inches):" << endl;
    cin >> slice;
    r = slice / 2;
    n = (pi * r * r) / 14.125;
    cout << endl;
    cout << "Cut this pizza into " << n << endl;

    return 0;
}
