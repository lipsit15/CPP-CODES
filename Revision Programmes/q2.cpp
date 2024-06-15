// method overriding
#include <iostream>
using namespace std;
class shape{
    public:
    void draw(){
        cout << "can't identify shape" << endl;
    }
};
class square:public shape{
    public:
    void draw(){
        cout << "the shape is square" << endl;
    }
};

int main(){
    square s;
    s.draw();

    return 0;
}