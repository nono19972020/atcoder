#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int x, y, z;

    cin >> z >> y >> x;

    double R = x + y + z;

    int maxv = max(x,y);
    maxv = max(maxv, z);
    int sum = x+y+z;


    double r = max(0.0, (double)(maxv - (sum-maxv)));

    double square = M_PI * (R*R - r*r);

    printf("%.10f\n", square);

    return 0;
}