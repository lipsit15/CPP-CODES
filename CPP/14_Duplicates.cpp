// duplicates in array
#include <iostream>
using namespace std;
void duplicates(int a[],int n){
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(a[i]==a[j]){
                cout << a[i] << ", ";
                break;
            }
        }
    }
    cout << endl;
}
void printarr(int a[],int n){
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {1,5,7,8,1,4,5,7,9};
    int n = sizeof(a) / sizeof(a[0]);
    printarr(a, n);
    cout << "Duplicates are : ";
    duplicates(a, n);

    return 0;
}