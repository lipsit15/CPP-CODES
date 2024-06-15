// whenever a class contains more than one method with the same name and diffrent types of parameters called method overloading.
#include <iostream>
using namespace std;
class car{
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
    car A;
    A.add();
    A.add(45, 56);
    A.add(45, 56.98);


    return 0;
}