// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate roots of a quadratic equation: ax^2 + bx + c = 0

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
#include <cmath>      // cmath library include ki gayi hai sqrt() function ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Variables declare kiye
    float a, b, c, root1, root2, dis;  
    // a, b, c -> quadratic equation ke coefficients
    // root1 -> pehla root
    // root2 -> doosra root
    // dis -> discriminant (b^2 - 4ac)

    cout << "Enter a, b, c: ";  
    cin >> a >> b >> c;  
    // User se coefficients input liye

    dis = b*b - 4*a*c;  
    // Discriminant calculate kiya: dis = b^2 - 4ac

    root1 = (-b + sqrt(dis)) / (2*a);  
    root2 = (-b - sqrt(dis)) / (2*a);  
    // Quadratic formula apply ki: x = [-b ± vdis] / 2a

    // Results display kiye
    cout << "Root1 = " << root1;  
    cout << "\nRoot2 = " << root2;  

    return 0;  
    // Program successfully end ho gaya
}
