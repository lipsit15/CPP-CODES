#include <iostream>
using namespace std;
void pattern(int n){
    for (int i = 1; i <= n;i++){
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n=5;
    pattern(5);

    return 0;
}