#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

long long n, a, b, c, d;
string s;

int main(){
    cin >> n >> a >> b >> c >> d;
    cin >> s;

    long long j = a-1;
    long long rock_length = 0;
    while(j < max(c-1, d-1)){
        if(s[j] == '#'){
            long long length = 0;
            while(j < max(c-1, d-1) and s[j] == '#'){
                j++;
                length++;
            }
            rock_length = max(rock_length, length);
            j++;
        }
        else{
            j++;
        }
    }

    if(c < d){
        if(rock_length >= 2){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    else{
        if(rock_length >= 2){
            printf("No\n");

        }
        else{
            long long i = b-2;
            long long space_length = 0;

            while(i <= d){
                if(s[i] == '.'){
                    long long length = 0;
                    while(i <= d and s[i] == '.'){
                        i++;
                        length++;
                    }
                    space_length = max(space_length, length);
                    i++;
                }
                else{
                    i++;
                }
            }
            
            if(space_length >= 3){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }

    }
    return 0;
}