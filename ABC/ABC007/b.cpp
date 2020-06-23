#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char a[11];
    scanf("%s", a);

    int length = strlen(a);
    
    if(length > 1){
        for(int i = 0; i < length-1; i++){
            printf("%c", a[i]);
        }
        printf("\n");
    }
    else{
        if(a[0] == 'a'){
            printf("-1\n");
        }
        else{
            a[0] = a[0] - 1;
            printf("%c\n", a[0]);
        }
    }

    return 0;
}