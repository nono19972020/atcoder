#include <iostream>
#include <cstdio> 
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> T(n, 0);

    long long a;
    for(long long i = 0; i < n; i++){
        cin >> a;
        if(T[a-1] == 0){
            T[a-1] = 1;
        }
        else{
            T[a-1] += 1;
        }
    }

    long long kind = 0;

    for(long long i = 0; i < n; i++){
        if(T[i] != 0){
            kind += 1;
        }
    }

    //printf("kind %lld\n", kind);

    if(kind <= k){
        printf("0\n");
        return 0;
    }

    sort(T.begin(), T.end());

    long long sum = 0;
    long long count = 0;
    for(long long j = 0; j < n; j++){
        if(T[j] != 0){
            sum += T[j];
            count++;
            if(count == (kind - k)){
                break;
            }
        }
        
    }

    printf("%lld\n", sum);

    return 0;

}