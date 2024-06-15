#include <iostream>
using namespace std;
bool checkpalindrome(string s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    if (checkpalindrome(s))
    {
        cout << "Yes palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }

    return 0;
}