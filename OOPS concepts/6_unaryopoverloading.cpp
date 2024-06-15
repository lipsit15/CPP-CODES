// unary operator overloading using class function
#include <iostream>
using namespace std;
class demo{
    int a, b;
    public:
    demo(int x,int y){
        a = x;
        b = y;
    }
    void show(){
        cout << "A: " << a << " " << "B: " << b << endl;
    }
    void operator -(){
        a = -a;
        b = -b;
    }
};

int main(){
    demo obj(20, -40);
    obj.show();
    -obj;
    obj.show();

    return 0;
}