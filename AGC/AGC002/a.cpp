#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    if(a == b){
        if(a > 0) printf("Positive\n");
        else if(a == 0) printf("Zero\n");
        else printf("Negative\n");
    }
    else{
        if(a > 0) printf("Positive\n");
        else if(a == 0) printf("Zero\n");
        else if(a < 0 and b >= 0) printf("Zero\n");
        else if(a < 0 and b < 0){
            long long c = b - a + 1;
            if(c % 2 == 0) printf("Positive\n");
            else printf("Negative\n");
        }
    }
    return 0;
}