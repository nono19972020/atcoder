#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;

    bool flag = false;
    for(long long i = 0; i <= x; i++){
        long long j = x - i;
        if(2*i + 4*j == y){
            flag = true;
            break;
        }
    }

    if(flag == true){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}