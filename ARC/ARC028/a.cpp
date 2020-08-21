#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long r = n % (a + b);
    if(1 <= r and r <= a) printf("Ant\n");
    else printf("Bug\n");
    return 0;
}