// whenever we writting method in super and subclass in such way that method name and parameter must be same called method overridding
#include <iostream>
using namespace std;
class shape{
    public:
    void draw(){
        cout << "Can't say the shape type" << endl;
    }

};
class square:public shape{
    public:
    void draw(){
        cout << "The shape is square" << endl;
    }
};

int main(){
    square s;
    s.draw();

    return 0;
}