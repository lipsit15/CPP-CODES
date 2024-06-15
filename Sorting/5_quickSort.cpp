#include <iostream>
#include<algorithm>
using namespace std;
int  partition(int a[],int l,int h){
    int pivot = a[l];
    int i = l;
    int j = h;
   while(i<j){
    while(i<=h && a[i]<=pivot){
        i++;
    }
    while(j>=l && a[j]>pivot){
        j--;
    }
    if(i<j){
        swap(a[i], a[j]);
    }

   }
   swap(a[j], a[l]);
   return j;
}
void quickSort(int a[],int l,int h){
    if(l<h){
        int pivot = partition(a, l, h);
        quickSort(a, l, pivot - 1);
        quickSort(a,pivot+1, h);
    }
}
void printarr(int a[],int n){
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    printarr(a, n);
    cout << "after" << endl;
    quickSort(a, 0, n - 1);
    printarr(a, n);

    return 0;
}