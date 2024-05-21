#include <iostream>
using namespace std;
// function declaration
void printArray(string *arr, int size);
int max(int a, int b)
{
    return (a > b) ? a : b;
}
void increment(int *a)
{
    *a++;
}
int main()
{
    // function calling
    cout << max(23, 55) << endl;
    string arr[] = {"Scar", "AK47", "AC80", "Machine Gun", "MP5", "AWM"};
    printArray(arr, 6);
    // functions using pointers
    int val = 34;
    cout << val << endl;
    increment(&val);
    cout << val << endl;
    return 0;
}

// function initialization
void printArray(string *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}