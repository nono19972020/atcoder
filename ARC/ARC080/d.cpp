#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool compair(pair<int, int> x, pair<int, int> y){
    return x.second < y.second;
}

int main(){
    int h ,w;
    int n;

    cin >> h >> w >> n;

    vector<pair<int, int> > a;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(make_pair(i+1, x));
    }

    sort(a.begin(), a.end(), compair);

    int maze[h+1][w+1];

    int y = 1;
    int x = 1;
    while(y <= h){
        if(y % 2 == 1){
            while(x <= w){
                
                maze[y][x] = a[0].first;
                //printf("%d ", maze[y][x]);
                a[0].second -= 1;
                if(a[0].second == 0){
                    a.erase(a.begin());
                }
                x++;
            }
            //printf("\n");
            //printf("x %d", x);
            x = w;
        }
        else if(y % 2 == 0){
            while(x >= 1){
                
                maze[y][x] = a[0].first;
                //printf("%d ", maze[y][x]);
                a[0].second -= 1;
                if(a[0].second == 0){
                    a.erase(a.begin());
                }
                x--;
            }
            //printf("\n");
            x = 1;
        }

        y++;
    }

    for(int j = 1; j <= h; j++){
        for(int i = 1; i <= w; i++){
            printf("%d ", maze[j][i]);
        }
        printf("\n");
    }

    return 0;
}