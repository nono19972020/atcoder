#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n];

    double length_max = 0;

    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
           length_max =  max(sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i])), length_max);
        }
    }

    printf("%f\n", length_max);

    return 0;
}