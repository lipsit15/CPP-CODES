#include <iostream>
using namespace std;
class a{
    public:
    a(){
        int n = 10;
        cout << n << endl;
    }
    ~a(){
        cout << "object destroyed" << endl;
    }
};

int main(){
    a obj;
     

    return 0;
}