#include <iostream>
using namespace std;
void sort012(int a[],int n){
    int l = 0, m = 0, h = n - 1;
    while(m<=h){
        if(a[m]==0){
            swap(a[l], a[m]);
            l++;
            m++;
        }
        else if(a[m]==1){
            m++;
        }
        else{
            swap(a[m], a[h]);
            h--;
        }
    }
}
void printa(int a[],int n){
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {0, 2, 1, 2, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    printa(a, n);
    cout << "after" << endl;
    sort012(a, n);
    printa(a, n);

    return 0;
}