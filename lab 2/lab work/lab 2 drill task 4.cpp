// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to ask the user to enter age and then display it

#include <iostream>      // iostream library include ki gayi hai jo input aur output ke liye use hoti hai

using namespace std;     // std namespace use kar rahe hain taake cout aur cin ko directly use kar saken

int main()               // Main function jahan se program execution start hota hai
{
	int a;                 // Integer type ka variable 'a' declare kiya gaya hai

	cout << "Dear user kindly enter your age: ";  // User ko age enter karne ke liye message display karega

	cin >> a;              // User se age input lega aur variable 'a' me store karega

	cout << a;             // User ki enter ki hui age screen par display karega

	return 0;              // Program successfully end ho jata hai
}
