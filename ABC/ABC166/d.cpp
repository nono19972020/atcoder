#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;







int main(){

    int x;
    cin >> x;

    int a, b;

    int delta;

    for(delta = 1; delta <= 100000; delta++){
        for(a = -118; a <= 119; a++){
            b = a - delta;
            if(a*a*a*a*a - b*b*b*b*b == x){

                printf("%d %d\n", a, b);
                return 0;
            }
        }
    }
 

  
}