#include <iostream>
using namespace std;
void printarr(int a[],int n){
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void merge(int a[],int l,int m,int h){
    int i = l, j = m + 1, k = 0;
    int temp[h - l + 1];
    while(i<=m && j<=h){
        if(a[i]<=a[j]){
            temp[k] = a[i];
            i++;
            k++;
        }
        else{
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        temp[k] = a[i];
        i++;
        k++;
    }
    while(j<=h){
        temp[k] = a[j];
        j++;
        k++;
    }
    for (int i = l, k = 0; i <= h;i++,k++){
        a[i] = temp[k];
    }
}
void mergeSort(int a[],int l,int h){
    if(l<h){
        int m = l + (h - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, h);
        merge(a, l, m, h);
    }
}

int main(){
    int a[] = {12, 45, 8, 23, 78, 3, 67};
    int n = sizeof(a) / sizeof(a[0]);
    printarr(a, n);
    cout << "After sorting" << endl;
    mergeSort(a, 0, n - 1);
    printarr(a, n);

    return 0;
}