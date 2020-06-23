#include <iostream>
#include <cstdio>
using namespace std;

char c[500][500];
bool visited[500][500];
int h, w;

void search(int x, int y){
    if(x < 0 || x >= w || y < 0 || y >= h || c[y][x] == '#'){
        return;
    }
    if(visited[y][x] == true){
        return;
    }

    visited[y][x] = true;


    search(x, y-1);
    search(x, y+1);
    search(x+1, y);
    search(x-1, y);

}


int main(){
    
    
    cin >> h >> w;

    int start_x, start_y;
    int goal_x, goal_y;
    
    for(int y = 0; y < h; y++){
       for(int x = 0; x < w; x++){
           cin >> c[y][x];
           visited[y][x] = false;
           if(c[y][x] == 's'){
               start_y = y;
               start_x = x;
            }
            else if(c[y][x] == 'g'){
                goal_y = y;
                goal_x = x; 
            }
            
       }
    }

    search(start_x, start_y);

    if(visited[goal_y][goal_x] == true){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;


}