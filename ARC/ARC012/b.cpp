#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    long double va, vb, l;
    cin >> n >> va >> vb >> l;
    for(long long i = 0; i < n; i++){
       long double t = l/va;
       l = t * vb;
    }
    printf("%.10Lf\n", l);
    return 0;    
}
