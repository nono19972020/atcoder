#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum;
    long long result[n];
    long long v[n];
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        v[i] = a;
        if(i == 0){
            sum = a;
        }
        else{
            sum = sum^a;
        }
    }
    //printf("sum %lld\n", sum);

    for(long long i = 0; i < n; i++){
       result[i] = sum^v[i];
    }

    for(long long i = 0; i < n; i++){
       result[i] = sum^v[i];
       printf("%lld ", result[i]);
    }
    printf("\n");

    //long long a = 20^11^9^24; 
    //cout << a << endl;
    //long long b = 20^a;
    //cout << b << endl;
    return 0;
}