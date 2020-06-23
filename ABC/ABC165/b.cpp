#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    long long money = 100;
    long long year = 0;

    long long x;

    cin >> x;

    while(money < x){
        year++;
        money = money * 1.01;
    }

    printf("%lld\n", year);

    return 0;
    
}