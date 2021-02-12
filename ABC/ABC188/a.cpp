#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;
    if(x > y){
        if(x - y < 3) printf("Yes\n");
        else printf("No\n");
    }
    else{
        if(y - x < 3) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}