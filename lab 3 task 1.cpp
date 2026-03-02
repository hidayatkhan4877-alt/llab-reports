#include <iostream>   // iostream library include ki jo input (cin) aur output (cout) ke liye use hoti hai

using namespace std;  // std namespace use ki taa ke cin aur cout directly use kar saken

int main()            // main function jahan se program start hota hai
{
    int num1, num2;  // do integer variables declare kiye: num1 aur num2

    // user se pehla number enter karne ko keh raha hai
    cout << "Enter first number: ";

    // user ka input num1 variable me store kar raha hai
    cin >> num1;

    // user se doosra number enter karne ko keh raha hai
    cout << "Enter second number: ";

    // user ka input num2 variable me store kar raha hai
    cin >> num2;

    // check karta hai agar num1 aur num2 equal hain
    if(num1 == num2)
        cout << "Numbers are equal";

    // check karta hai agar num1, num2 se greater hai
    if(num1 > num2)
        cout << "First number is greater";

    // check karta hai agar num1, num2 se smaller hai
    if(num1 < num2)
        cout << "First number is smaller";

    return 0;   // program successfully end ho gaya
}
