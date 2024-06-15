#include <iostream>
using namespace std;

int main(){
    int n,fact=1;
    cin >> n;
    if(n<0){
        cout << "error" << endl;
    }
    else{
        for (int i = 1; i <= n;i++){
            fact = fact * i;
        }
    }
    cout << "Factorial: " << fact << endl;
    return 0;
}



// // Using recursion

// #include <iostream>
// using namespace std;
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << fib(n) << endl;

//     return 0;
// }