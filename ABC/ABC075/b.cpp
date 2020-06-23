#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    int h, w;

    cin >> h >> w;

    //printf("h %d w %d\n", h, w);

    char s[h][w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> s[i][j];
        }
    }

    int count;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '.'){
                count = 0;
                if(i - 1 >= 0){
                    if(s[i - 1][j] == '#'){
                        count++;
                    }
                    if(j - 1 >= 0 and s[i - 1][j - 1] == '#'){
                        count++;
                    }
                    if(j + 1 < w  and s[i - 1][j + 1] == '#'){
                        count++;
                    }    
                }
                if(i + 1 < h){
                    if(s[i + 1][j] == '#'){
                        count++;
                    }
                    if(j - 1 >= 0 and s[i + 1][j - 1] == '#'){
                        count++;
                    }
                    if(j + 1 < w  and s[i + 1][j + 1] == '#'){
                        count++;
                    }    
                }
                if(j - 1 >= 0 and s[i][j - 1] == '#'){
                    count++;
                }
                if(j + 1 < w and s[i][j + 1] == '#'){
                    count++;
                }
                s[i][j] = '0' + count;
            } 
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            printf("%c", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}