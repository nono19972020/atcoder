#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
using namespace std;

int n;
int A[200];

int all_even(){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(A[i] % 2 != 0){
            count  = 1;
            break;
        }
        else{
            A[i] = A[i] / 2;
        }
    }

    return count;
}


int main(){

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int count = 0;
    int re;
    while(1){
        re = all_even();
        if(re == 0){
            count++;
        }
        else{
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}