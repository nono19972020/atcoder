#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    char maze[h][w];

    for(long long i = 0; i < h; i++){
        string s;
        cin >> s;
        for(long long j = 0; j < w; j++){
            maze[i][j] = s[j];
        }
    }

    long long cnt = 0;

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            if(j + 1 < w and maze[i][j] == '.' and maze[i][j+1] == '.') cnt++;
            if(i + 1 < h and maze[i][j] == '.' and maze[i+1][j] == '.') cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}