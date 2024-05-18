#include <iostream>
using namespace std;

int main()
{
    // Primitive data types
    cout << "Size of int : " << sizeof(int) << " byte." << endl;
    cout << "Size of char : " << sizeof(char) << " byte." << endl;
    cout << "Size of double : " << sizeof(double) << " byte." << endl;
    cout << "Size of float : " << sizeof(float) << " byte." << endl;
    cout << "Size of bool : " << sizeof(bool) << " byte." << endl;
    cout << "Size of long : " << sizeof(long) << " byte." << endl;

    // integer data types
    int a = 2322;
    short b = 23;
    long c = 38939;
    long long d = 7883883;
    cout << "Integer data types: " << endl;
    cout << "int : " << a << endl;
    cout << "short : " << b << endl;
    cout << "long : " << c << endl;
    cout << "long long : " << d << endl;

    // floating-point data types
    float e = 23.23;
    double f = 34.2222;
    long double g = 98.233333334;
    cout << "Floating-point data types: " << endl;
    cout << "float : " << e << endl;
    cout << "double : " << f << endl;
    cout << "long double : " << g << endl;

    // chracter data types
    char h = 'T';
    wchar_t i = L'@';
    char16_t j = u'%';
    char32_t k = U'&';
    cout << "Character data types: " << endl;
    cout << "char : " << h << endl;
    cout << "wchar_t : " << i << endl;
    cout << "char16_t : " << j << endl;
    cout << "char32_t : " << k << endl;

    // boolean data types
    bool l = true;
    bool m = false;
    cout << "Boolean data types: " << endl;
    cout << "bool : " << l << endl;
    cout << "bool : " << m << endl;

    // string data type
    string n = "Artist";
    cout << "String data types: " << endl;
    cout << "string : " << n << endl;
    return 0;
}