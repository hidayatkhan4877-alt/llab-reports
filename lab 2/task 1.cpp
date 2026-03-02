#include <iostream>   // iostream library include karta hai jo input/output (cout, endl) ke liye use hoti hai

using namespace std;  // std namespace use karta hai taa ke cout aur endl directly use ho saken

int main()            // main function jahan se program execution start hoti hai
{
    int a = 10;      // integer variable 'a' declare kiya aur usme value 10 store ki

    float b = 5.5;   // float variable 'b' declare kiya aur usme decimal value 5.5 store ki

    double c = 20.99; // double variable 'c' declare kiya jo zyada precise decimal value store karta hai

    char d = 'A';    // char variable 'd' declare kiya aur usme character 'A' store kiya

    bool e = true;   // bool variable 'e' declare kiya aur usme true value store ki

    // Integer ki value print kar raha hai
    cout << "Integer value: " << a << endl;

    // Integer ka size (bytes me) print kar raha hai
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;

    // Integer ka memory address print kar raha hai
    cout << "Location of int: " << &a << endl;

    cout << endl;    // ek blank line print karta hai formatting ke liye

    // Float ki value print kar raha hai
    cout << "Float value: " << b << endl;

    // Float ka size print kar raha hai
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;

    // Float ka memory address print kar raha hai
    cout << "Location of float: " << &b << endl;

    cout << endl;    // blank line print karta hai

    // Double ki value print kar raha hai
    cout << "Double value: " << c << endl;

    // Double ka size print kar raha hai
    cout << "Size of double: " << sizeof(c) << " bytes" << endl;

    // Double ka memory address print kar raha hai
    cout << "Location of double: " << &c << endl;

    cout << endl;    // blank line print karta hai

    // Char ki value print kar raha hai
    cout << "Char value: " << d << endl;

    // Char ka size print kar raha hai
    cout << "Size of char: " << sizeof(d) << " bytes" << endl;

    // Char ka memory address print kar raha hai
    // (void*) use kiya taa ke address print ho, warna character print ho sakta hai
    cout << "Location of char: " << (void*)&d << endl;

    cout << endl;    // blank line print karta hai

    // Bool ki value print kar raha hai (true = 1, false = 0)
    cout << "Bool value: " << e << endl;

    // Bool ka size print kar raha hai
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;

    // Bool ka memory address print kar raha hai
    cout << "Location of bool: " << &e << endl;

    return 0;       // program successfully end hone ka signal deta hai
}
