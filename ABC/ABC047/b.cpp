#include <iostream>
#include <cstdio>
using namespace std;
int w, h, n;

bool rectangle[100][100];

void draw(int x, int y, int a){
    if(a == 1){
        for(int j = 0; j < h; j++){
            for(int i = 0; i < x; i++){
                rectangle[j][i] = false;
            }
        }
    }
    else if(a == 2){
        for(int j = 0; j < h; j++){
            for(int i = x; i < w; i++){
                rectangle[j][i] = false;
            }
        }
    }
    else if(a == 3){
        for(int j = 0; j < y; j++){
            for(int i = 0; i < w; i++){
                rectangle[j][i] = false;
            }
        }
    }
    else if(a == 4){
        for(int j = y; j < h; j++){
            for(int i = 0; i < w; i++){
                rectangle[j][i] = false;
            }
        }
    }
}

void init(){
    for(int j = 0; j < h; j++){
        for(int i = 0; i < w; i++){
            rectangle[j][i] = true;
        }
    }
}

int count(){
    int counter = 0;
    for(int j = 0; j < h; j++){
        for(int i = 0; i < w; i++){
            if(rectangle[j][i] == true){
                counter++;
            } 
        }
    }

    return counter;
}

void print(){
    for(int j = 0; j < h; j++){
        for(int i = 0; i < w; i++){
            printf("%d ", rectangle[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    cin >> w >> h >> n;

    init();
    //print();

    int x, y, a;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> a;
        draw(x, y, a);
        //print();
    }

    //print();

    printf("%d\n", count());

    return 0;
}