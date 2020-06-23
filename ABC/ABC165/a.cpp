#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    int k, a, b;
    cin >> k;
    cin >> a >> b; 
    bool flag = false;

    for(int i = a; i <= b; i++){
        if( i % k == 0){
            flag = true;
            break;
        }

    }

    if(flag == true){
        printf("OK\n");
    }
    else{
        printf("NG\n");
    }

    return 0;
    
}