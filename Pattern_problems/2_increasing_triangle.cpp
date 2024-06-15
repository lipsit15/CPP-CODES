#include <iostream>
using namespace std;
void pattern(int n){
    for (int i = 0; i < n;i++){ // for rows
        for (int j = 0; j <= i;j++){ // for columns
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