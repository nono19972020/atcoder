#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;

    string s;
    cin >> s;

    for(long long i = 0; i < n; i++){
        if(s[i] == 'o') x++;
        else if(s[i] == 'x' and x > 0) x--;
        else if(s[i] == 'x' and x == 0) continue;
    }

    cout << x << endl;
    return 0;
}