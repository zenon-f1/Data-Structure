#include <iostream>
using namespace std;

int main()
{
    // table
    int n;
    cout << "Enter a number till you want to print the table..." << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= 10)
        {
            cout << i << " * " << j << " = " << i * j << endl;
            j++;
        }
        cout << "-------------" << endl;
        i++;
    }
    // using break to optimization inside loop
    int target = 34;
    int list[] = {1, 23, 55, 77, 43, 34, 88, 78, 2, 98, 33};
    int iterationCount = 0;
    for (int num : list)
    { // enhanced for loop
        iterationCount++;
        if (num == target)
        {
            cout << "Target Found!" << endl;
            break;
        }
    }
    cout << "Total iteration taken to check : " << iterationCount << endl;

    return 0;
}