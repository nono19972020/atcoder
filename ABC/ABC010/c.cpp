#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int sx, sy, gx, gy;
    int t, v;

    cin >> sx >> sy >> gx >> gy >> t >> v;

    int n;

    cin >> n;

    bool flag = false;

    double dis;

    int x, y;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        dis = sqrt((x-sx)*(x-sx)+(y-sy)*(y-sy)) + sqrt((x-gx)*(x-gx)+(y-gy)*(y-gy));
        if(dis <= (double) t*v){
            flag = true;
            //break;
        }
    }

    if(flag == true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}