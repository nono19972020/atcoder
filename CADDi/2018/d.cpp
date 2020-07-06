#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    bool odd = false;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a % 2 != 0){
            odd = true;
        }
    }

    if(odd == true){
        printf("first\n");
    }
    else{
        printf("second\n");
    }
    return 0;
}