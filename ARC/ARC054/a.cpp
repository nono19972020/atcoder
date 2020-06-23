#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;

    long double time;
    if(s <= d){
        if(y - x > 0){
             time = min(abs(d-s)/(x+y), (l - abs(d-s))/(abs(x-y)));
        }
        else{
            time = abs(d-s)/(x+y);
        }
       
    }
    else{
        if(y - x > 0){
            time = min(abs(d-s)/(abs(x-y)), (l - abs(d-s))/(abs(x+y)));
        }
        else{
            time = (l - abs(d-s))/abs(x+y);
        }
        
    }


    printf("%.10Lf\n", time);

    return 0;
}