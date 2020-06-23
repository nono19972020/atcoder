#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long long a, v, b, w, t;
    cin >> a >> v >> b >> w >> t;

    if(v <= w){
        printf("NO\n");
        return 0;
    }

    if(abs(b-a)<= t*(v-w)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}