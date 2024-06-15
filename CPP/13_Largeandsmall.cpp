#include <iostream>
#include<algorithm>
using namespace std;

// int main(){
//     int a[] = {10,5,20,2,8};
//     int n = sizeof(a) / sizeof(a[0]);
//     int max = *max_element(a, a + n);
//     int min = *min_element(a, a + n);
//     cout << "Largest: " << max << endl;
//     cout << "Smallest: " << min << endl;
//     return 0;
// }

int main(){
    int a[] = {10, 5, 20, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    cout << "Largest: " << max << endl;
    cout << "Smallest: " << min << endl;
    return 0;
}