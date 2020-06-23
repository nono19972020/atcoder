#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s;

    while(n > 0){
        n -= 1;
        s.push_back('a' + n % 26);
        n /= 26;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}