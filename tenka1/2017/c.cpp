#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long n, h, w;

    for(h = 1; h <= 3500; h++){
        for(w = 1; w <= 3500; w++){
            if( 4*h*w - N*w - N*h > 0 and (N*h*w) % (4*h*w - N*w - N*h) == 0){
                //printf("4*h*w - N*w - N*h %lld\n", 4*h*w - N*w - N*h);
                n = N*h*w/(4*h*w - N*w - N*h);
                printf("%lld %lld %lld\n", h, n, w);
                return 0;
            }
        }
    }
    return 0;
}