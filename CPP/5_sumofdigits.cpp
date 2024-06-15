#include <iostream>
using namespace std;

int main(){
    int n, sum = 0, rem;
    cin >> n;
    while(n>0){
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    cout << "sum : " << sum << endl;
    return 0;
}