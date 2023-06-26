/* Global variable in outside the main
first the variable inside the main will be checked
and then outside the main*/

#include <iostream>
using namespace std;

int age {27}; // Global variable

int main()
{
    int age {16}; //Best practice 
    cout << age << endl;

    return 0;
}