#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;



int main(){
    char N[1000];

    string n;

    scanf("%s", N);

    n = N;

    int i;
    //strlen(N);

    //printf("%s\n", n.c_str());
   

    i = n.find_first_of('7');

    if(i != string::npos){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
    
}
