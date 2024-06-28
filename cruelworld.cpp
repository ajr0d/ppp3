#include <iostream>
using namespace std;

int main()
{
    string s = "Goodbye , cruel world! ";
    cout << s << '\n';
}

// issues were 'Main' should be 'main, else we get a warning for no return statement
// string needs to be lowercase
// cOut needs to be cout, again case sensitive
// S and s are diffrent, so s is defined and S isn't. change S to s
