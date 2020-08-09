#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long cnt = 0;
    for(long long i = 0; i < 12; i++){
        string s;
        cin >> s;

        if(s.find('r') != string::npos) cnt++;
    }

    cout << cnt << endl;
    return 0;
}