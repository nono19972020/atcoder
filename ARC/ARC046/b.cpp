#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    if(n <= a) printf("Takahashi\n");
    else{
        if(a > b) printf("Takahashi\n");
        else if(a < b) printf("Aoki\n");
        else{
            if(n %(a + 1) == 0) printf("Aoki\n");
            else printf("Takahashi\n");
        }
    }
    return 0;
}