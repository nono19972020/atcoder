#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string a;
    cin >> a;
    long long b;
    cin >> b;
    b--;
    long long n = a.size();

    long long r = b % n;
    cout << a[r] << endl;
    return 0;
}