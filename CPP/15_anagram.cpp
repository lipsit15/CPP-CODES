#include <iostream>
#include<algorithm>
using namespace std;
bool checkanagram(string s1,string s2){
    int l1 = s1.size();
    int l2 = s2.size();
    if(l1!=l2){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main(){
    string s1 = "listen";
    string s2 = "silent";
    if(checkanagram(s1,s2)){
        cout << "Yes anagram" << endl;
    }
    else{
        cout << "Not anagram" << endl;
    }

    return 0;
}