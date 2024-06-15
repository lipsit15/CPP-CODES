// outer loop determines rows and inner loop determines columns
#include <iostream>
using namespace std;
void pattern(int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << "* ";
        }
        cout << endl;
        
    }
}

int main(){
    int n = 5;
    pattern(5);

    return 0;
}