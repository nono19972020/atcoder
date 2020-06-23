#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int c[3][3];

    
    int C;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> C;
            c[i][j] = C;
        }
    }
    int a[3], b[3];
    a[0] = 0;
    b[0]= c[0][0];
    b[1] = c[0][1];
    b[2] = c[0][2];
    a[1] = c[1][0] - b[0];
    a[2] = c[2][0] - b[0];

    bool flag = true;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i]+ b[j] != c[i][j]){
                flag = false;
                break;
            }
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

