#include <iostream>
using namespace std;

int main(){
    int n, rem, sum = 0;
    cin >> n;
    int ncopy;
    ncopy = n;
    while(ncopy!=0){
        rem = ncopy % 10;
        sum += rem * rem * rem;
        ncopy = ncopy / 10;
    }
    if(sum==n){
        cout << "Armstrong" << endl;
    }
    else{
        cout << "Not Armstrong" << endl;
    }

    return 0;
}