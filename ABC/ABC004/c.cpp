#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int a[7];
    for(int i = 1; i <= 6; i++){
        a[i] = i;
    }

    int b[30][7];

    for(int i = 0; i <= 29; i++){
        for(int j = 1; j <= 6; j++){
            if(i == 0){
                b[i][j] = a[j];
            }
            else{
                b[i][j] = b[i-1][j];
            }
        }
        int tmp;
        tmp = b[i][i%5+1];
        b[i][i%5+1] = b[i][i%5+2];
        b[i][i%5+2] = tmp;
    }

    int mod = (n-1)%30;

    for(int i = 1; i <= 6; i++){
        printf("%d", b[mod][i]);
    }
    printf("\n");

    return 0;
}