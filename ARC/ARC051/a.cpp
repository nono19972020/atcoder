#include <iostream>
#include <cstdio>
using namespace std;
#define white 0
#define red 1
#define blue 2
#define purple 3

int main(){
    int campus[201][201];

    for(int y = 0; y <= 200; y++){
        for(int x = 0; x <= 200; x++){
            campus[y][x] = white;
        }
    }

    int x1, y1, r, x2, y2, x3, y3;

    cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;

    x1 += 100;
    y1 += 100;
    x2 += 100;
    y2 += 100;
    x3 += 100;
    y3 += 100;

    for(int y = 0; y <= 200; y++){
        for(int x = 0; x <= 200; x++){
            if((x-x1)*(x-x1) + (y-y1)*(y-y1) <= r*r){
                campus[y][x] = red;
            }
        }
    }
    for(int y = y2; y <= y3; y++){
        for(int x = x2; x <= x3; x++){
            if(campus[y][x] == red){
                campus[y][x] = purple;
            }
            else{
                campus[y][x] = blue;
            }
        }
    }

    int count_red = 0, count_blue = 0;

    for(int y = 0; y <= 200; y++){
        for(int x = 0; x <= 200; x++){
            if(campus[y][x] == red){
                count_red++;
            }
            if(campus[y][x] == blue){
                count_blue++;
            }
        }
    }

    if(count_red >= 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    if(count_blue >= 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}