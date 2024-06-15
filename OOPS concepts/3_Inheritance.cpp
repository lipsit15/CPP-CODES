#include <iostream>
using namespace std;
class Father{
    protected:
        string surname = "Pradhan";

};
class daughter:Father{
    string name = "Siddhipragyan";
    public:
    void show1(){
        cout << name << " " << surname << endl;
    }
};
class son:Father{
    string name = "Lipsit";
    public:
    void show2(){
        cout << name << " " << surname << endl;
    }
};

int main(){
    daughter d1;
    son s1;
    d1.show1();
    s1.show2();

    return 0;
}