#include <iostream>   // iostream library include ki hai taake input aur output use kar saken
using namespace std;  // std namespace use kiya hai taake baar baar std na likhna pade

int main()   // yahan se program start hota hai
{
    int day;   // ek integer variable banaya jisme user day number enter karega

    cout << "Enter day number (1-7): ";   // user se day number lene ke liye message show kiya
    cin >> day;   // user jo number enter karega wo 'day' variable me store ho jayega

    switch(day)   // switch statement day ki value check karega
    {
        case 1:   // agar user 1 enter kare
            cout << "Monday";   // Monday print karega
            break;   // break se switch yahin stop ho jayega

        case 2:   // agar user 2 enter kare
            cout << "Tuesday";  // Tuesday show karega
            break;   // switch ko yahin se end karega

        case 3:   // agar value 3 ho
            cout << "Wednesday";  // Wednesday print karega
            break;   // yahan ruk jayega

        case 4:   // agar value 4 ho
            cout << "Thursday";  // Thursday print karega
            break;

        case 5:   // agar value 5 ho
            cout << "Friday";  // Friday print karega
            break;

        case 6:   // agar value 6 ho
            cout << "Saturday";  // Saturday print karega
            break;

        case 7:   // agar value 7 ho
            cout << "Sunday";  // Sunday print karega
            break;

        default:   // agar 1 se 7 ke ilawa koi number ho
            cout << "Invalid day number";   // error message show karega
    }

    return 0;   // program successfully end ho gaya
}
