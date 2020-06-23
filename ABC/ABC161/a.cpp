#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;


int main(){
    int x, y, z, tmp;

    cin >> x >> y >> z;
    
    tmp = x;
    x = y;
    y = tmp;

    tmp = x;
    x = z;
    z = tmp;

    printf("%d %d %d\n", x, y, z);

    return 0;

}