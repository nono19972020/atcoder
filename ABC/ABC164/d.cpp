#include <iostream>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
#include <math.h>
using namespace std;

long long ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int main(){
    char a[2000000];

    scanf("%s", a);

    //printf("%s\n", a);

    int amari[2019];
    long long length = strlen(a); 
    long long ten = 1;

    //printf("%lld\n", length);
    
    long long T[length + 1];
    T[length] = 0;

    for(long long i = length; i > 0; i--){
        //printf("%c\n", a[i - 1]);
        //ten = (long long)  pow(10, length - i);
        T[i - 1] = ten * ctoi(a[i - 1]) + T[i];
        //printf(" : %f\n", pow(10, length - i));
        T[i - 1] = T[i - 1] % 2019;
        ten = ten * 10;
        ten = ten % 2019;//値がオーバーフローするので割っておく

        //printf("%lld : %lld\n", i, T[i-1]);
        //printf("%lld\n", ten);
    }

    /*for(long long i = 0; i <= length; i++){
        T[i] = T[i] % 2019;
    }*/

    /*for(long i = 0; i <= length; i++){
        printf("%ld : %lld\n", i, T[i]);
    }*/

    for(int j = 0; j < 2019; j++){
        amari[j] = 0;
    }

    for(long long i = 0; i <= length; i++){
        amari[T[i]]++;
    }

    for(int j = 0; j < 2019; j++){
        if (amari[j] > 0){
        amari[j] = amari[j] * (amari[j] - 1)/2;
        }
    }

    int count = 0;

    for(int j = 0; j < 2019; j++){
        count = count + amari[j];
    }

    printf("%d\n", count);





    

    return 0;
    
}