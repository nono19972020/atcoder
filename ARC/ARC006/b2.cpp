#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, l;
    cin >> n >> l;
    cin.ignore();

    //printf("aaaa\n");
    char maze[l+1][2*n-1];
    long long sx, sy;
    for(long long i = 0; i < l+1; i++){
        string s;
        getline(cin, s);
        //printf("i %lld ", i);
        for(long long j = 0; j < 2*n-1; j++){
            maze[i][j] = s[j];
            if(maze[i][j] == 'o'){
                sy = i;
                sx = j;
            }
        }
    }

    long long x = sx, y = sy;
    for(long long i = 0; i < l+1; i++){
        if(y - 1 >= 0){
            if(x-1 >= 0 and maze[y-1][x-1] == '-'){
                y--;
                x -= 2;
            }
            else if(x+1 < 2* n -1 and maze[y-1][x+1] == '-'){
                y--;
                x += 2;
            }
            else y--;
        }
    }

    cout << (x+2)/2 << endl;
    return 0;
}