#include <iostream>
#include <cstdio>
#include<cmath>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    double o = 30*(double) n + 30*(double)m/60;
    if(o >= 360.0){
        o -= 360.0;
    }

    o = abs(o - 6*double(m));

    o = min(o, 360-o);

    printf("%.10f\n", o);

    return 0;

}