#include <iostream>
using namespace std;
void countFreq(string s){
    int l = s.size();
    int freq[256] = {0};
    for (int i = 0; i < l;i++){
        freq[s[i]]++;
    }
    for (int i = 0; i < 256;i++){
        if(freq[i]>0){
            cout << char(i) << " - " << freq[i] << " times " << endl;
        }
    }
}

int main(){
    string s;
    getline(cin, s);
    countFreq(s);

    return 0;
}