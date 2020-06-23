#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    if(k <= n/2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}