#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long w, h, x, y;
    cin >> w >> h >> x >> y;

    double square = double(w) * double(h);

    if(x+x == w and y+y == h){
        printf("%lf 1\n",  square/2.0);
    }
    else{
        printf("%lf 0\n", square/2.0);
    }

    return 0;
}

