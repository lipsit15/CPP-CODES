#include <iostream>
using namespace std;
void print(int a[],int n){
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";

    }
    cout << endl;
}
void merge(int a[],int l,int m,int h){
    int i = l, j = m + 1;
    int temp[h - l + 1];
    int k = 0;
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
    for (i = l, k = 0; i <= h; i++, k++)
    {
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
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    cout << "After sorting:" << endl;
    mergeSort(a, 0, n - 1);
    print(a, n);

    return 0;
}