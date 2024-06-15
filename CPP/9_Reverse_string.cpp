#include <iostream>
using namespace std;
void reverse(string s){
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while(i<=j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout <<"After reverse: "<< s << endl;
}

int main(){
    string s;
    cout << "s: ";
    getline(cin, s);
    reverse(s);

    return 0;
}