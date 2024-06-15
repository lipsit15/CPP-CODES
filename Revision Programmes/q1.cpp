#include <iostream>
using namespace std;
class A{
    public:
    void add(){
        int a = 10, b = 20, c;
        c = a + b;
        cout << c << endl;
    }
    void add(int x,int y){
        int c;
        c = x + y;
        cout << c << endl;
    }
    void add(int x,double y){
        double c;
        c = x + y;
        cout << c << endl;
    }
};

int main(){
    A obj;
    obj.add();
    obj.add(12, 14);
    obj.add(12, 14.123);

    return 0;
}