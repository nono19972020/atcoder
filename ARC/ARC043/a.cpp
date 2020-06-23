#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    long double a, b;
    cin >> n >> a >> b;
    long double sum = 0, maxv = 0, minv = 1000000000;

    for(long long i = 0; i < n; i++){
        long double s;
        cin >> s;
        sum += s;
        maxv = max(maxv, s);
        minv = min(minv, s);
    }

    
    if(maxv == minv){
        printf("-1\n");
        return 0;
    }

    long double p = b/(maxv - minv);

    long double q = (n*a - p*sum)/n;

    printf("%.10Lf %.10Lf\n", p, q);

    return 0;

}