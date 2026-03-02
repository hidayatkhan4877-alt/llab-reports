#include <iostream>   // iostream library include ki jo input (cin) aur output (cout) ke liye use hoti hai

using namespace std;  // std namespace use ki taa ke cin aur cout directly use kar saken

int main()            // main function jahan se program execution start hoti hai
{
    int num;         // integer variable 'num' declare kiya number store karne ke liye

    // user se number enter karne ko keh raha hai
    cout << "Enter a number: ";

    // user ka input num variable me store kar raha hai
    cin >> num;

    // check karta hai ke number 0 se greater aur 100 se less hai ya nahi
    // && logical AND operator hai, dono conditions true honi chahiye
    if(num > 0 && num < 100)
        cout << "Number is between 0 and 100";

    // agar condition false ho to ye message print hoga
    else
        cout << "Number is NOT between 0 and 100";

    return 0;   // program successfully end ho gaya
}
