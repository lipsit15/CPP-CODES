#include <iostream>
using namespace std;
void pattern(int n){
    for (int i = 0; i < n;i++){
        for (int j = i; j < n;j++){ //run from i to n i.e for first row i = 1 then i=2.....
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