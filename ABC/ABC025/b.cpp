#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    long long count = 0;
    for(long long i = 0; i < n; i++){
        string s;
        long long d;
        cin >> s >> d;
        if(s == "East"){
            if(d < a) count += a;
            else if(a <= d and d <= b) count += d;
            else if(d > b) count += b;
        }
        else{
            if(d < a) count -= a;
            else if(a <= d and d <= b) count -= d;
            else if(d > b) count -= b;
        }
    }

    if(count == 0){
        printf("0\n");
    }
    else if(count > 0){
        printf("East %lld\n", count);
    }
    else{
        printf("West %lld\n", -count);
    }
    return 0;
}