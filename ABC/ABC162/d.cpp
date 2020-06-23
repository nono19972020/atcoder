#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int N;
    cin >> N;
    char S[4000];
    scanf("%s", S);
    long long count_r = 0, count_g = 0, count_b = 0;

    for(int i = 0; i < N; i ++){
        if(S[i] == 'R'){
            count_r++; 
        }
        else if(S[i] == 'G'){
            count_g++; 
        }
        else if(S[i] == 'B'){
            count_b++; 
        }
    }
    //printf("cpunt_r %d\n", count_r);
    //printf("cpunt_g %d\n", count_g);
    //printf("cpunt_b %d\n", count_b);

    long long count = 0;
   //int j;

    for(int i = 0; i < N; i++){
        for(int j = 1; i + 2 * j < N; j++){
            if(S[i] != S[i + j] and S[i + j] != S[i + 2 * j] and S[i + 2 * j] != S[i]){
                count++;
            }
        }
    }

    //printf("count %d\n", count);

    //printf("%d\n", count_r*count_g*count_b);

    printf("%lld\n", count_r*count_g*count_b - count);

    return 0;
}