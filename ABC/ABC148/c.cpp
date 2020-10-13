#include <iostream>
#include <cstdio>
using namespace std;

long long gcd(long long a, long long b) {
   if (a%b == 0) return b;
   else return gcd(b, a%b);
}

//最小公倍数
long long lcm(long long a, long long b) {
   return a * b / gcd(a, b);
}

int main(){
    long long a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;
    return 0;
}