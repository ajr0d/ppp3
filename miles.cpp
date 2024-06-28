#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter an amount of miles to convert: ";
    double mi;
    cin >> mi;
    double km = mi * 1.609;
    cout << mi << " miles converted to km is " <<  km << " km.";
}
