#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the name of the person you want to write to and their age, and enter a name of a friend you'd like to mention: \n";
    string first_name;
    int age;
    string friend_name;
    cin >> first_name >> age >> friend_name;
    // PPP_support isn't working, so I can't get error working yet
    if (age <= 0 || age >= 110)
        cout << "No you're not.";
    cout << "\nDear " << first_name << ",\n" << "\n\tHow are you? I am fine. I miss you.\n";
    cout << "\tHave you seen " << friend_name << " lately?\n" << "\tI heard you had a birthday and you are " << age << " years old.\n";
    if (age < 12)
        cout << "\tNext year you will be " << age+1 << " years old.";
    if (age == 17)
        cout << "\tNext year you will be able to vote.";
    if (age > 70)
        cout << "\tAre you retired?";
    cout << "\n\nYours sincerely,\nAdam";
}
