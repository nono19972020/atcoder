#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long minv;
    minv = min((n/10)*100+(n%10)*15, (n/10+1)*100);
    cout << minv << endl;
    return 0;
}