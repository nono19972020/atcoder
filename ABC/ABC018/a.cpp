#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    if(a < b and b < c){
        printf("3\n");
        printf("2\n");
        printf("1\n");
    }
    else if(a < c and c < b){
        printf("3\n");
        printf("1\n");
        printf("2\n");
    }
    else if(b < c and c < a){
        printf("1\n");
        printf("3\n");
        printf("2\n");
    }
    else if(b < a and a < c){
        printf("2\n");
        printf("3\n");
        printf("1\n");
    }
    else if(c < a and a < b){
        printf("2\n");
        printf("1\n");
        printf("3\n");
    }
    else if(c < b and b < a){
        printf("1\n");
        printf("2\n");
        printf("3\n");
    }
    return 0;
}