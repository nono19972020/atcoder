#include <iostream>
#include <cstdio>
using namespace std;

long long sign(long long A){
    return (A>0)-(A<0);
}

int main(){
    long long n;

    cin >> n;

    long long a[n];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long count = 0;
    long long i = 0;
    while(i < n){
        while(i + 1 < n and a[i] == a[i+1]){
            i++;
        }

        if(i+1 < n and a[i] < a[i+1]){
            while(i+1 < n and a[i] <= a[i+1]){
                i++;
            }
        }
        else if(i+1 < n and a[i] > a[i+1]){
            while(i+1 < n and a[i] >= a[i+1]){
                i++;
            }
        }
        count++;
        i++;
      
    }

    printf("%lld\n", count);

    return 0;
}