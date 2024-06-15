#include <iostream>
using namespace std;

int binSearch(int arr[], int s, int e, int x)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binSearch(arr, 0, n - 1, x);
    cout << "Element at index: " << result << endl;

    return 0;
}

// The time complexity of binary search is
// O(logn), where n is the number of elements in the array.