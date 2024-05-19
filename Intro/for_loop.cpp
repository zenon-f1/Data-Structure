#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int avg = 0;
    cout << "Enter 10 numbers : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i << " : " << endl;
        // cin >> arr[i];
        avg += arr[i];
    }
    cout << "Average of these number is : " << avg << endl;

    // printing ascii values
    for (int i = 0; i <= 255; i++)
    {
        cout << char(i) << " ";
    }
    cout << endl;

    // factorial of a number
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    long long int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << "Factorial of the number is : " << fact << endl;
    // nested loop
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}