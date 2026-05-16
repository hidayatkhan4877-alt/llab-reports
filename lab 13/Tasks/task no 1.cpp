#include <iostream>   // input/output ke liye library
using namespace std;  // standard namespace use kar rahe hain

// Person naam ka structure define kar rahe hain
struct Person {

    string name;     // person ka naam store karega
    int age;         // person ki age store karega
    string address;  // person ka address store karega
};

int main() {

    // person1 object banaya aur values initialize ki
    Person person1 = {"Ali", 20, "Frankfurt"};

    // output show karna start
    cout << "Person Details:" << endl;

    // dot operator se name access kar ke print kar rahe hain
    cout << "Name: " << person1.name << endl;

    // dot operator se age access kar ke print kar rahe hain
    cout << "Age: " << person1.age << endl;

    // dot operator se address access kar ke print kar rahe hain
    cout << "Address: " << person1.address << endl;

    return 0; // program end
}
