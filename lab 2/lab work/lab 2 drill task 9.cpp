// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to add two numbers using a user-defined function

#include <iostream>      // iostream library include ki gayi hai input/output ke liye
using namespace std;     // std namespace use kar rahe hain taake cout aur cin directly use ho sake

// Function declaration: addTwo function do integers ko input lega aur unka sum return karega
int addTwo(int x, int y);  

int main()
{
    int a, b, sum;       // Integer variables declare kiye gaye
    
    cout << "Enter the first number: ";  
    cin >> a;            // User se pehla number input lega
    
    cout << "Enter the second number: ";
    cin >> b;            // User se doosra number input lega
    
    sum = addTwo(a, b);  // addTwo function call kiya aur result sum me store kiya
    
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;  // Result print karega
    
    return 0;            // Program successfully end ho gaya
}

// Function definition
int addTwo(int x, int y)   
{
    return (x + y);      // Do numbers ka sum calculate karke return karega
}
