#include <iostream>
using namespace std;
class Encap
{
private:
    int age;

public:
    string name;
    void input(int a){
        age = a;
        cout << age << endl;
    }
};

main()
{
    Encap E;
    E.input(23);

    E.name = "Lipsit";
    cout<< E.name << endl;

    return 0;
}