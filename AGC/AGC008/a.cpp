#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;

    if(x == 0 and y > 0){
        printf("%lld\n", y);
    }
    else if(x == 0 and y < 0){
        printf("%lld\n", 1-y);
    }
    else if(x > 0 and y == 0){
        printf("%lld\n", 1+x);
    }
    else if(x < 0 and y == 0){
        printf("%lld\n", -1*x);
    }
    else if(x > 0 and y > 0){
        if(y > x){
            printf("%lld\n", y-x);
        }
        else{
            printf("%lld\n", 2-y+x);
        }
    }
    else if(x > 0 and y < 0){
        if(x == -1*y){
            printf("1\n");
        }
        else if(abs(x) < abs(y)){
            printf("%lld\n", 1-x-y);
        }
        else{
            printf("%lld\n", 1+y+x);
        }
    }
    else if(x < 0 and y > 0){
        if(x == -1*y){
            printf("1\n");//OK
        }
        else if(abs(x) < abs(y)){
            printf("%lld\n", 1+y+x);
        }
        else{
            printf("%lld\n", 1-y-x);
        }
    }
    else if(x < 0 and y < 0){
        if(x < y){
            printf("%lld\n", y-x);
        }
        else{
            printf("%lld\n", 2-y+x);
        }
    }

    return 0;

}