#include <iostream>
#include <string>
using namespace std;
int main()
{
    // output
    cout << "Endgame \n";
    string name = "Vinay Sharma";
    int age = 18;
    cout << "Hey, " << name << " you are " << age << " years old." << endl;
    // input
    int number;
    cout << "Enter your favorite number.." << endl;
    cin >> number;
    cout << "You entered : " << number << endl;
    // input a string
    string txt;
    cout << "Enter a string..." << endl;
    cin.ignore(); // to flush the input buffer  
    getline(cin, txt);
    cout << txt << endl;

    return 0;
}