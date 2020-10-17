#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long double ans1 = 0, ans2 = 0, ans3 = 0;

    for(long long i = 0; i < n; i++){
        long double x;
        cin >> x;
        ans1 += abs(x);
        ans2 += x*x;
        ans3 = max(ans3, abs(x));
    }

    ans2 = sqrt(ans2);

    printf("%.10Lf\n", ans1);
    printf("%.10Lf\n", ans2);
    printf("%.10Lf\n", ans3);


    return 0;
}