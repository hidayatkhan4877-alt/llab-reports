// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to check whether the entered number is positive or negative

#include <iostream>      // iostream library input/output operations ke liye use hoti hai

using namespace std;     // std namespace use kar rahe hain taake cout aur cin directly likh saken

int main()               // Main function jahan se program execution start hota hai
{
	int number;            // Integer type ka variable 'number' declare kiya gaya hai

	cout << "Enter an integer: ";   // User ko integer number enter karne ka message display karega
	cin >> number;                  // User se input lega aur variable 'number' me store karega

	if (number >= 0)                // Check karega ke number zero ya positive hai
	{
    	cout << "You entered a positive integer: " << number << endl;   // Agar condition true ho to positive message print karega
	}
	else                            // Agar condition false ho (yani number negative ho)
	{
    	cout << "You entered a negative integer: " << number << endl;   // Negative number ka message print karega
	}

	return 0;                       // Program successfully end ho jata hai
}
