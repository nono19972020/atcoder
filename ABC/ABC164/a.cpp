#include <iostream>
#include <string>
#include <cstdio>
using namespace std;



int main(){
    int s, w;
    cin >> s >> w;

    if(s - w > 0){
        printf("safe\n");
    }
    else{
        printf("unsafe\n");
    }

    return 0;
}