#include <iostream>
using namespace std;
bool checkprime(int n){
    if(n==1||n==0){
        return false;
    }
    for (int i = 2; i < n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(checkprime(n)){
        cout << "Yes prime no" << endl;
    }
    else{
        cout << "Not prime no" << endl;
    }

    return 0;
}