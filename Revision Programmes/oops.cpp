#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout << "Can't say much" << endl;
    }
};
class a:A{
    public:
    void show(){
        cout << "Yes i can say something" << endl;
    }
};


int main(){
    a obj;
    obj.show();

    return 0;
}