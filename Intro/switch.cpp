#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter your grade : A/B/C/F" << endl;
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good!" << endl;
        break;
    case 'C':
        cout << "Fine!" << endl;
        break;
    case 'F':
        cout << "Not Accepted!" << endl;
        break;
    default:
        cout << "Not specified." << endl;
    }
    return 0;
}