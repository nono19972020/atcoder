#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    int n, y;
    cin >> n >> y;

    int a, b, c;
    
    for(a = n; a >= 0; a--){
        for(b = n - a; b >= 0; b--){
            for(c = n - a - b; c >= 0; c--){
                if(10000*a + 5000 * b + 1000 * c == y and a + b + c == n){
                    printf("%d %d %d\n", a, b, c);
                    return 0;
                }
            }
        }
    }

    printf("-1 -1 -1\n");
    return 0;
}