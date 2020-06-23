#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){

    long long n , m;

    long long a;
    //count = 0;

    cin >> n >> m;

    for(long long i = 0; i < m; i++){
        cin >> a;
        //count = count + a;
        n = n - a;
    }

    if(n < 0){
        printf("-1\n");
    }
    else{
        printf("%lld\n", n);
    }

    return 0;
	
}
