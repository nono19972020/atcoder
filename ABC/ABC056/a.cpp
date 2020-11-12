#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char a, b;
    cin >> a >> b;

    if(a == 'H' and b == 'H') printf("H\n");
    else if(a == 'H' and b == 'D') printf("D\n");
    else if(a == 'D' and b == 'H') printf("D\n");
    else if(a == 'D' and b == 'D') printf("H\n");

    return 0;
}