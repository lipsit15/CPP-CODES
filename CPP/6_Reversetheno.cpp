#include <iostream>
using namespace std;

int main(){
    int n, rem, reverse;
    cin >> n;
    while(n>0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;

    }
    cout << "reverse : " << reverse << endl;
    return 0;
}