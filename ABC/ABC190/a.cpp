#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    if(c == 0){
        if(a <= b) printf("Aoki\n");
        else printf("Takahashi\n");
    }
    else{
        if(a >= b) printf("Takahashi\n");
        else printf("Aoki\n");
    }

    return 0;
}