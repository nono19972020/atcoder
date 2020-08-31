#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    if(a <= c and c <= b) printf("Yes\n");
    else printf("No\n");
    return 0;
}