#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    char s[3];

    for(int i = 0; i < 3; i++){
        cin >> s[i];
    }

    int count = 0;

    for(int i = 0; i < 3; i++){
        if(s[i] == '1'){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}