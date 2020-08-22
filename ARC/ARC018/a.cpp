#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long double height, bmi;
    cin >> height >> bmi;
    long double weight = bmi *height * height/10000;

    printf("%.10Lf\n", weight);
    return 0;
}