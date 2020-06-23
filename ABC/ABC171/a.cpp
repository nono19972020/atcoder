#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    char c;
    cin >> c;

    if(isupper(c) != 0){
        printf("A\n");
    }
    else{
        printf("a\n");
    }
    return 0;
}