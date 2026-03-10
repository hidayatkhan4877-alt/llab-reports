// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to print "Usama Siraj" multiple times using a while loop

#include <iostream>      // iostream library input/output ke liye include ki gayi hai
using namespace std;     // std namespace use kar rahe hain taake cout directly use ho sake

int main() 
{
	int i = 0;            // Variable 'i' ko 0 se initialize kiya (starting point)

	while (i < 5)         // Loop tab tak chalega jab tak i 5 se chhota hai
	{
		cout << "Usama Siraj\n";  // Har iteration me name print karega
		i++;                      // i ki value 1 se increment karega
	}

	return 0;               // Program successfully end ho jata hai
}
