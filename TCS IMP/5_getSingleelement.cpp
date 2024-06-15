// Find the number that appears once, and the other numbers twice

#include <iostream>
using namespace std;
int getsingleelement(int arr[],int n){
    int xorr = 0;
    for (int i = 0; i < n;i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main(){
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = getsingleelement(arr, n);
    cout << result << endl;
    return 0;
}