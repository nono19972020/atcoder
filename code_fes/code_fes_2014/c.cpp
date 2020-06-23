#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;

    cin >> a >> b;

    cout << b/4 - b/100 + b/400 - ((a-1)/4 - (a-1)/100 + (a-1)/400) << endl;

    return 0;
}