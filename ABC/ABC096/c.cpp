#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
using namespace std;


int main(){
    int h, w;

    cin >> h >> w;

    char s[h][w];

    int count_b = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> s[i][j];
            if(s[i][j] == '#'){
                count_b++;
                
            }
        }
    }

    int sum = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){

            if(i - 1 >= 0 and s[i - 1][j] == '#' and s[i][j] == '#'){
                sum++;
                continue;
            }
            if(i + 1 < h and s[i + 1][j] == '#' and s[i][j] == '#'){
                sum++;
                continue;
            }
            if(j - 1 >= 0 and s[i][j - 1] == '#' and s[i][j] == '#'){
                sum++;
                continue;
            }
            if(j + 1 < w and s[i][j + 1] == '#' and s[i][j] == '#'){
                sum++;
                continue;
            }
        }
    }

    //printf("count_b %d\n", count_b);

    //printf("sum %d\n", sum);


    if(sum == count_b){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;

    







}