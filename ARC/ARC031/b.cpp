#include <iostream>
#include <cstdio>
using namespace std;

char c[10][10];
bool visited[10][10];
int count_re;

void search(int x, int y){
    if(x < 0 || x >= 10 || y < 0 || y >= 10 || c[y][x] == 'x'){
        return;
    }
    if(visited[y][x] == true){
        return;
    }
    if(c[y][x] == 'o' and visited[y][x] == false){
        count_re++;
    }
    visited[y][x] = true;
    
    search(x, y-1);
    search(x, y+1);
    search(x-1, y);
    search(x+1, y);
}

void init(){
    for(int y = 0; y < 10; y++){
        for(int x = 0; x < 10; x++){
            visited[y][x] = false;
        }
    }
}

int main(){
    int count = 0;

    for(int y = 0; y < 10; y++){
        for(int x = 0; x < 10; x++){
            cin >> c[y][x];
            visited[y][x] = false;
            if(c[y][x] == 'o'){
                count++;
            }
        }
    }

    //printf("count %d\n", count);

    for(int y = 0; y < 10; y++){
        for(int x = 0; x < 10; x++){
            if(c[y][x] == 'x'){
                c[y][x] = 'o';
                count_re = 0;
                search(x, y);
                c[y][x] = 'x';
                init();//visitedを初期化
                //printf("count_re %d\n", count_re);
                if(count_re - 1 == count){
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }

    printf("NO\n");

    return 0;


}