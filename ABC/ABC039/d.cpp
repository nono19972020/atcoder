#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    char img[h][w];
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            cin >> img[y][x];
        }
    }

    char img_re[h][w];

    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            if(img[y][x] == '.'){
                img_re[y][x] = '.';

                if(x+1 < w and y+1 < h){
                    img_re[y+1][x+1] = '.';
                }
                if(x+1 < w and y-1 >= 0){
                    img_re[y-1][x+1] = '.';
                }
                if(x-1 >= 0 and y+1 < h){
                    img_re[y+1][x-1] = '.';
                }
                if(x-1 >= 0 and y-1 >= 0){
                    img_re[y-1][x-1] = '.';
                }
                if(x-1 >= 0){
                    img_re[y][x-1] = '.';
                }
                if(x+1 < w){
                    img_re[y][x+1] = '.';
                }
                if(y-1 >= 0){
                    img_re[y-1][x] = '.';
                }
                if(y+1 < h){
                    img_re[y+1][x] = '.';
                }

            }
        }
    }
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            if(img_re[y][x] != '.'){
                img_re[y][x] = '#';
            }
        }
    }
    /*
    printf("\n");
    printf("img_re\n");
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            printf("%c", img_re[y][x]);
        }
        printf("\n");
    }*/

    char dist[h][w];

    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            if(img_re[y][x] == '#' ||(y+1 < h and x+1 < w and img_re[y+1][x+1] == '#')||(y-1 >= 0 and x+1 < w and img_re[y-1][x+1] == '#' )||(y+1 < h and x-1 >= 0 and img_re[y+1][x-1] == '#')||(y-1 >= 0 and x-1 >= 0 and img_re[y-1][x-1] == '#')||(x+1 < w and img_re[y][x+1] == '#')||(x-1 >= 0 and img_re[y][x-1] == '#')||(y+1 < h and img_re[y+1][x] == '#')||(y-1 >= 0 and img_re[y-1][x] == '#')){
                dist[y][x] = '#';
            }
            else{
                dist[y][x] = '.';
            }
        }
    }
    /*
    printf("\n");
    printf("dist\n");
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            printf("%c", dist[y][x]);
        }
        printf("\n");
    }*/

    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            if(img[y][x] != dist[y][x]){
                printf("impossible\n");
                return 0;
            }
        }
    }
    printf("possible\n");
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            printf("%c", img_re[y][x]);
        }
        printf("\n");
    }

    return 0;
}