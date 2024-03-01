#include <iostream>
using namespace std;

// Structs or Structures. Not built in, but user defined data type
// The difference between a struct and a class is a struct is always public!
// For backwards compatibility with c from c++
// Can do #define struct class, which turns structs into classes haha
// Can add methods to structs

struct Smartphone
{
    string name;
    int storageSpace;
    string color;
    float price;
};

// Now we are trying nested structs
struct Person
{
    string name;
    int age;
    Smartphone smartphone;
};

// Function to print out our struct
void print(Smartphone phone)
{
    cout << phone.name << endl;
    cout << phone.storageSpace << endl;
    cout << phone.color << endl;
    cout << phone.price << endl;
}

void printPerson(Person p)
{
    cout << p.name << endl;
    cout << p.age << endl;
    print(p.smartphone);
}

int main()
{

    Smartphone smartPhone;

    smartPhone.name = "IPhone 16 Pro";
    smartPhone.color = "Midnight Blue";
    smartPhone.price = 500.00;
    smartPhone.storageSpace = 64;

    Person p;
    p.name = "Brennan";
    p.age = 23;
    p.smartphone = smartPhone;

    printPerson(p);

    return 0;
}