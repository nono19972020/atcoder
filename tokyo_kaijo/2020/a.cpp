#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(long long i = 0; i < 3; i++){
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}