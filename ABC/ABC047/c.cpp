#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 0;

    int i = 0;
    while(i < s.size()){
        if(s[i] == s[i+1]){
            while(i < s.size() and s[i] == s[i+1]){
                i++;
            }
            i++;
            count++;
        }
        else{
            i++;
            count++;
        }
    }

    cout << count-1 << endl;

    return 0;
}