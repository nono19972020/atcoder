#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int r, g, b, n;
    cin >> r >> g >> b >> n;

    int count = 0;

    for(int z = 0; z <= 3000; z++){
        for(int y = 0; y <= 3000; y++){
            int x = n - r*y - g*z;
            if(x >= 0 and x <= 3000 and x % b == 0){
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}