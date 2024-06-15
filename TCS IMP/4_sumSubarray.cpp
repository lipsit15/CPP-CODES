#include <iostream>
using namespace std;
int  maxSubarray(int a[],int n){
    int  maxi = INT_MIN;
    int  sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}
int main(){
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int  maxSum = maxSubarray(a, n);
    cout << "Sum: " << maxSum << endl;

    maxSubarray(a, n);


    return 0;
}