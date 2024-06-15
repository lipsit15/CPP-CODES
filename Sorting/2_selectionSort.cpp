#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for (int i = 0; i < n - 1;i++){
        int min_index = i;
        for (int j = i + 1; j < n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}
void printarr(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarr(arr, n);
    cout << "after sorting" << endl;
    selectionSort(arr, n);
    printarr(arr, n);

    return 0;
}