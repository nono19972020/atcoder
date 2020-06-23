#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int N, K;

    cin >> N >> K;

    long A[N + 1];
    for(int i = 0; i < N + 1; i++){
        A[i] = i;
    }

    //Aのi番目までの総和を求める
    vector<long> S(N + 2, 0);
    for(int i = 0; i < N + 1; i++){
        S[i + 1] = S[i] + A[i];
    }

    long count = 0;
    int right, left;

    long minv;
    long maxv;

    for(int i = K; i <= N + 1; i++){
        left = 0;
        right = i;
        minv = S[right] - S[left];
        
        left = N + 1 - i;
        right = N + 1;

        maxv = S[right] - S[left];

        count = count + 1 + maxv - minv;


    }

    count = count % (1000000000 + 7);

    printf("%ld\n", count);


    return 0;


	
}
