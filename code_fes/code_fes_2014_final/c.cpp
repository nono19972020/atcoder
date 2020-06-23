#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

long long make_n(long long n){
    string N = to_string(n);

    long long sum = 0;
    long long rui = 1;

    for(long long j = N.size()-1; j >= 0; j--){
        if(j == N.size()-1){
            sum += (N[j]-'0')*rui;
            continue;
        }

        rui = rui*n;
        sum += (N[j]-'0')*rui;
    }

    return sum;
}

int main(){
    long long A;
    cin >> A;

   

    long long k;
    bool find = false;
    for(k = 10; k <= 10000; k++){
        //printf("make_n %lld\n", make_n(k));
        if(A == make_n(k)){
            find = true;
            break;
        }
    }

    if(find == true){
        printf("%lld\n", k);
    }
    else{
        printf("-1\n");
    }

    return 0;

}