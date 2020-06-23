#include <iostream>
#include <cstdio>
#include <cstdlib>  // abs() for integer
using namespace std;

int main(){
    int N, X, Y;
    cin >> N >> X >> Y;

    int mt[N+1][N+1];

    int i, j;

    int count[N];

    for(int i = 0; i < N; i++){
        count[i] = 0;
    }

    int minv;
    
    for(i = 1; i <= N; i++){
        for(j = i; j <= N; j++){
            //printf("%d\n",min(j - i, abs(X- i) + 1 + abs(Y - j)));
            minv = min(j - i, abs(X- i) + 1 + abs(Y - j));
            count[minv]++;
            //printf("count %d\n", count[minv]);

        }
    }

    //printf("aaa\n");

    for(i = 1; i < N; i++){
        printf("%d\n", count[i]);
    }

    return 0;
}