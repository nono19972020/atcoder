#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int k, s;
    cin >> k >> s;

    int count = 0;
    int z;
    
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            z = s - x - y;
            if(z >= 0 and z <= k){
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}