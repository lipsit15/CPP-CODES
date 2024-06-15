#include <iostream>
using namespace std;
void printarr(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int linearSearch(int arr[],int n,int x){
    for (int i = 0; i < n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12, 13, 56, 78, 89};
    int n;
    printarr(arr, 5);
    int result =linearSearch(arr, 5, 89);
    cout << "Element present at index: " << result << endl;

    return 0;
}
/*The time complexity of linear search is 
O(n), where n is the number of elements in the array.
*/ 