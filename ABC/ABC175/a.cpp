#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long i = 0;
    long long maxv = 0;
    while(i < 3){
        if(s[i] == 'R'){
            long long length = 0;
            while(i < 3 and s[i] == 'R'){
                length++;
                i++;
            }
            maxv = max(maxv, length);
        }
        i++;
    }
    cout << maxv << endl;
    return 0;
}