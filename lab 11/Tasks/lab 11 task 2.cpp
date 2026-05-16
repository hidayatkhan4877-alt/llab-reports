#include <iostream>     // input/output ke liye
#include <cstring>      // strcpy() aur strcat() ke liye
using namespace std;    // standard namespace

int main()
{
    char firstName[50];   // first name store karne ke liye array
    char lastName[50];    // last name store karne ke liye array
    char fullName[100];   // dono names combine karne ke liye array

    cout << "Enter first name: ";   // user se first name lena
    cin >> firstName;               // input lena (sirf single word)

    cout << "Enter last name: ";    // user se last name lena
    cin >> lastName;                // input lena

    strcpy(fullName, firstName);    // first name ko fullName mein copy karna

    strcat(fullName, " ");          // beech mein space add karna

    strcat(fullName, lastName);     // last name ko join karna

    cout << "Full Name: " << fullName << endl;
    // final combined name display karna

    return 0;   // program end
}