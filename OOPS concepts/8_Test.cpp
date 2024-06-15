#include <iostream>
using namespace std;
class test{
    int a, b;
    public:
    test(int x,int y){
        a = x;
        b = y;
    }
    void show(){
        cout << "A: " << a << " " << "B: " << b << endl;
    }
    friend void operator-(test &t);
};
void operator-(test&t){
    t.a = -t.a;
    t.b = -t.b;
}

int main(){
    test t(12, -13);
    t.show();
    -t;
    t.show();

    return 0;
}