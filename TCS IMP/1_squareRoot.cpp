#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        double squareRoot = sqrt(n);
        cout << "The sqaure root of " << n << " is " << squareRoot << endl;
    }

    return 0;
}