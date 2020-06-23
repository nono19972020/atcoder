#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    double n, k;
    cin >> n >> k;

    long long sum;

    sum = 1 + 3*(n-k) + 3*(k-1) + 6*(n-k)*(k-1);

    //double log_sum = log10(sum);
    //double n3 = ((double) n)*log10(3);

    //printf("log_sum %f n3 %f\n", log_sum, n3);

    //double log_p = log_sum - n3;

    //printf("log_p %f\n", log_p);


    double pro = sum/pow(n, 3);

    printf("%.10f\n", pro);

    return 0;
}