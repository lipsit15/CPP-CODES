#include <iostream>
using namespace std;
class Person
{
private:
    int age;
    string name;
    string address;

public:
    void input()
    {
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
    }
    void show(){
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    Person a, b, c;
    a.input();
    b.input();
    c.input();
    cout << "Displaying output: " << endl;
    a.show();
    b.show();
    c.show();

    return 0;
}