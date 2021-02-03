#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if(r1 == r2 and c1 == c2) printf("0\n");
    else if(r1 + c1 == r2 + c2) printf("1\n");
    else if(r1 - c1 == r2 - c2) printf("1\n");
    else if(abs(r1 - r2) + abs(c1 - c2) <= 3) printf("1\n");
    else if((r1 + r2 + c1 + c2) % 2 == 0) printf("2\n");
    else if(abs((r1 + c1) - (r2 + c2)) <= 3) printf("2\n");
    else if(abs((r1 - c1) - (r2 - c2)) <= 3) printf("2\n");
    else if(abs(r1 - r2) + abs(c1 - c2) <= 6) printf("2\n");
    else printf("3\n");

    return 0;
}