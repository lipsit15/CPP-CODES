#include <iostream>
using namespace std;
bool checkpalindrome(int n){
    if(n<0){
        return false;
    }
    int realNum = n;
    int reverseNum = 0;
    int rem;
    while(n!=0){
        rem = n % 10;
        reverseNum = reverseNum * 10 + rem;
        n /= 10;
    }
    return realNum == reverseNum;
}

int main(){
    int n;
    cin >> n;
    if(checkpalindrome(n)){
        cout << "yes palindrome" << endl;
    }
    else{
        cout << "not palindrome" << endl;
    }

    return 0;
}