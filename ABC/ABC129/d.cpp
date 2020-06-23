#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    char s[h][w];
    long long length_sx[h][w];
    long long length_sy[h][w];

    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            cin >> s[y][x];
            length_sx[y][x] = 0;
            length_sy[y][x] = 0;
        }
    }

    
    for(long long y = 0; y < h; y++){
        long long x = 0;
        while(x < w){
            if(s[y][x] == '.'){
                long long length = 0;
                while(x < w and s[y][x] == '.'){
                    x++;
                    length++;
                }
                length_sx[y][x-1] = length;
            }
            x++;
        }
    }

    for(long long x = 0; x < w; x++){
        long long y = 0;
        while(y < h){
            if(s[y][x] == '.'){
                long long length = 0;
                while(y < h and s[y][x] == '.'){
                    y++;
                    length++;
                }
                length_sy[y-1][x] = length;
            }
            y++;
        }
    }

    for(long long y = 0; y < h; y++){
        long long x = w-1;
        while(x >= 0){
            if(s[y][x] == '.'){
                long long length = length_sx[y][x];
                while(x >= 0 and s[y][x] == '.'){
                    length_sx[y][x] = length;
                    x--;
                }
            }
            x--;
        }
    }

    for(long long x = 0; x < w; x++){
        long long y = h-1;
        while(y >= 0){
            if(s[y][x] == '.'){
                long long length = length_sy[y][x];
                while(y >= 0 and s[y][x] == '.'){
                    length_sy[y][x] = length;
                    y--;
                }
            }
            y--;
        }
    }

    long long maxv = 0;
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            if(s[y][x] == '.'){
                maxv = max(maxv, length_sx[y][x] + length_sy[y][x]-1);
            }
        }
    }

    cout << maxv << endl;
    return 0;
}