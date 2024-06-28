#include<iostream>
using namespace std;

int main()  // read name and age
{
    cout << "Please enter your first name and age\n";
    string first_name;
    double age;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age in months " << age * 12.0 << ")\n";
}

// because of my laptop version of C++ compiler, im doing lots of work to get these to work, quite frustrating
