#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long double> p(n);

    for(long long i = 0; i < n; i++){
        cin >> p[i];
        p[i] = (1.0+p[i])/2;
    }

    long long right = 0;
    long double sum = 0;
    long double maxv = 0;

    for(long long left = 0; left < n; left++){
        while(right < n and right - left < k){
            sum += p[right];
            right++;
        }
        maxv = max(maxv, sum);

        if(right == left) right++;
        else sum -= p[left];
    }
    printf("%.10Lf\n", maxv);
    return 0;
}