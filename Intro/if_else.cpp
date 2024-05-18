#include <iostream>
using namespace std;

int main()
{
    // if-else
    int age = 45;
    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }
    else
    {
        cout << "Nah! You can't." << endl;
    }

    // else-if
    int number = 34;
    if (number > 0)
    {
        cout << "Positive." << endl;
    }
    else if (number == 0)
    {
        cout << "Zero." << endl;
    }
    else
    {
        cout << "Negative." << endl;
    }
    return 0;
}