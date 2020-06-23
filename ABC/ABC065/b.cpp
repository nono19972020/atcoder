#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int button = 1;
    

    int count = 0;

    while(1){
        button = a[button];
        count++;
        if(button == 2){
            break;
        }
        if(count >= n){
            break;
        }
            
    }

    if(button == 2){
        printf("%d\n", count);
    }
    else if(count >= n){
        printf("-1\n");
    }

    return 0;
}