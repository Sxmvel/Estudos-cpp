#include <iostream>
using namespace std;

int main()
{
    bool isAdmin = true; // true ou false; 0 ou 1;

    cout << isAdmin << endl;
    char symbol = '#';
    cout << symbol << endl;

    // modificadores de tipos no java
    // signed e unsigned - Sinal e sem sinal.
    unsigned long long int age = 31;
    cout << "idade: " << age << endl;

    float pi = 3.14; // 32 bits - single precision floating point type

    const double PI = 3.1415592; // 64 bits - double precision floating point type

    cout << pi << endl;
    cout << PI << endl;

    // datatype modifiers
    //  signed unsined long short
    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl;

    // sizeof(Tipo_Do_Dado) - para a quantidade em bytes
    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(char16_t) << " byte" << endl;
    cout << sizeof(char32_t) << " bytes" << endl;
    cout << sizeof(wchar_t) << " bytes" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(long long int) << " bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;
    cout << sizeof(double) << " bytes" << endl;

    return 0;
}