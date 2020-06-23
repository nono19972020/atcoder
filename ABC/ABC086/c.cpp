#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>

using namespace std;



int main(){

    int n;
    cin >> n;
    int t[120000], x[120000], y[130000];

    t[0] = x[0] = y[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
    }
    int dt, dist;

    bool can = true;

    for(int i = 0; i < n; i++){
        dt = t[i + 1] - t[i];
        dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
        if(dist > dt){
            can = false;
        }

        if(dt % 2 != dist %2){
            can = false;
        }
    }

    if(can == true){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0; 

}