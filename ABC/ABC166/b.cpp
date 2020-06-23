#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int k;
    
    int x;
    int A;

    cin >> n >> k;

    int a[n + 1];

    for(int i = 1; i <= n; i++){
        a[i] = 1;
    }

   
    for(int i = 0; i < k; i++){
        cin >> x;
        for(int j = 0; j < x; j++){
            cin >> A;
            a[A] = 0;
        }

    }

    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum = sum + a[i];
    }

    printf("%d\n", sum);

    return 0;
    
}