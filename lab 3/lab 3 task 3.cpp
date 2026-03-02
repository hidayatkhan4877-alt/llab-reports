#include <iostream>   // iostream library include ki jo input (cin) aur output (cout) ke liye use hoti hai

using namespace std;  // std namespace use ki taa ke cin aur cout directly use kar saken

int main()            // main function jahan se program start hota hai
{
    int num;         // integer variable 'num' declare kiya number store karne ke liye

    // user se number enter karne ko keh raha hai
    cout << "Enter a number: ";

    // user ka input num variable me store kar raha hai
    cin >> num;

    // check karta hai agar number 0 se greater hai
    if(num > 0)
        cout << "Number is positive";   // agar condition true ho to ye message print hoga

    return 0;   // program successfully end ho gaya
}
