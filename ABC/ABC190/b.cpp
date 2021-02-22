#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, s, d;
    cin >> n >> s >> d;

    for(long long i = 0; i < n; i++){
        long long x, y;
        cin >> x >> y;
        if(x < s and y > d){
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
    return 0;
}