#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    char S[10];
    char T[10];

    scanf("%s", S);
    scanf("%s", T);

    int length = strlen(S);

    int count = 0;

    int i = 0;

    while(i < length){
        if(S[i] == T[i]){
            i++;
        }
        else{
            if(S[i] == '@'){
                if(T[i] == 'a' || T[i] == 't'||T[i] == 'c'||T[i] == 'o' || T[i] == 'd'||T[i] == 'e' || T[i] == 'r'){
                    i++;
                }
                else{
                    break;
                }
            }
            else if(T[i] == '@'){
                if(S[i] == 'a' || S[i] == 't'||S[i] == 'c'||S[i] == 'o' || S[i] == 'd'||S[i] == 'e' || S[i] == 'r'){
                    i++;
                }
                else{
                    break;
                }

            }
            else{
                break;
            }
        }
    }

    if(i == length){
        printf("You can win\n");
    }
    else{
        printf("You will lose\n");
    }

    return 0;
}