#include <iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for (int i = 1; i < n;i++){
        int j = i - 1;
        int k = arr[i];
        while(j>-1 && arr[j]>k){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}
void printarr(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {8, 5, 7, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarr(arr, n);
    cout << "After sorting" << endl;
    insertionSort(arr, n);
    printarr(arr, n);

    return 0;
}