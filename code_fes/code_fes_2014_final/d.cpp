#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a;
    cin >> a;
    if(a == 1){
        printf("1 1\n");
        return 0;
    }
    printf("%lld 2\n", a+1);
    return 0;
}