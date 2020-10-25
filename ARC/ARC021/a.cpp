#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a[4][4];
    for(long long i = 0; i < 4; i++){
        for(long long j = 0; j < 4; j++) cin >> a[i][j];
    }

    bool flag = false;
    for(long long i = 0; i < 4; i++){
        for(long long j = 0; j < 4; j++){
            if(j + 1 < 4 and a[i][j] == a[i][j+1]) flag = true;
        }
    }

    for(long long j = 0; j < 4; j++){
        for(long long i = 0; i < 4; i++){
            if(i + 1 < 4 and a[i][j] == a[i+1][j]) flag = true;
        }
    }

    if(flag == true) printf("CONTINUE\n");
    else printf("GAMEOVER\n");

    return 0;
}