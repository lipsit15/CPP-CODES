#include <iostream>
using namespace std;
class A{
    public:
        virtual void show() = 0;
        void disp(){
            cout << "I am base class" << endl;
        }
};
class B:public A{
    public:
    void show(){
        cout<<"I am derived class" << endl;
    }
};

int main(){
    B obj;

    obj.show();
    obj.disp();

    return 0;
}