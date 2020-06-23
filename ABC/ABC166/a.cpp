#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s == "ABC"){
        printf("ARC\n");
    }
    else if(s == "ARC"){
        printf("ABC\n");
    }

    return 0;
    
}