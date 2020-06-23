#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int amari = a % b;

    while(1){
        a = a % b;
        //printf("a %d\n", a);
        if(a == c){
            break;
        }
        a = (a + amari) % b;
        if(a == amari ){
            break;
        }
    }

    if(a == c){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}