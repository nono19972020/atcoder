#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int n, k;
char s[100];
char t[100];

char min_char(char a[]){
    int length = strlen(a);
    char min_c = a[0];

    for(int i = 0; i < length; i++){
        if(min_c < a[i]){
            min_c = a[i];
        }
    }

    return min_c;
}

void dic(int i, int count){


    char min_c = min_char(s);
    if(s[i] != min_c){
        count++;
    }
    
}

int main(){
    

    cin >> n >> k;
    cin >> s;

}