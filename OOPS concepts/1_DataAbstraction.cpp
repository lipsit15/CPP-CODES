/*You can see in the below program we are unable access the variables a and b directly 
however one can call the function set() to set the values in a and b and the function display() to 
display the values of a and b.
*/ 
#include <iostream>
using namespace std;
class DAbstract{
    private:
        int a, b;
    public:
    void set(int x,int y){
        a = x;
        b = y;
    }
    void display(){
        cout << a << endl;
        cout << b << endl;
    }
};

int main(){
    DAbstract D;
    D.set(12, 14);
    D.display();

    return 0;
}