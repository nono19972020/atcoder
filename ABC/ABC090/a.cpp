#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char c[3][3];

    for(long long i = 0; i < 3; i++){
        for(long long j = 0; j < 3; j++) cin >> c[i][j];
    }

    string ans;
    printf("%c%c%c\n", c[0][0], c[1][1], c[2][2]);
    
    return 0;
}