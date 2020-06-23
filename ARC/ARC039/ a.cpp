#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    string a2, b2;

    a2 = a;
    a2[0] = '9';
    b2 = b;
    b2[1] = '1';

    int maxv;

    int delta1 = stoi(a2) - stoi(b);
    int delta2 = stoi(a) - stoi(b2);

    maxv = max(delta1, delta2);

    printf("%d\n", maxv);

    return 0;

}