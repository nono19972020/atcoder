#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int a[n];

    for(int j = 0; j < n; j++){
        cin >> a[j];
    }

    int binary[n];

    int i = 0;

    while(x > 0){
        ///printf("x %d\n", x);
        binary[i] = x%2;
        x = x/2;
        i++;
    }
    /*
    for(int j = i-1; j >= 0; j--){
        printf("%d ", binary[j]);
    }
    printf("\n");*/

    int sum = 0;

    for(int j = 0; j <= i-1; j++){
        if(binary[j] == 1){
            sum = sum + a[j];
        }
    }

    printf("%d\n", sum);

    return 0;
}