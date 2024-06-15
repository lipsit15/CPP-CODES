#include <iostream>
using namespace std;

int main(){
    int n, a = 0, b = 1, nextNum;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n;i++){
        if(i==1){
            cout << a << ",";
            continue;
        }
        if(i==2){
            cout << b << ",";
            continue;
        }
        nextNum = a + b;
        a = b;
        b = nextNum;
        cout << nextNum << ",";
    }
        return 0;
}