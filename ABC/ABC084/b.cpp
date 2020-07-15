#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    for(long long i = 0; i < a + b + 1; i++){
        if(i < a) {
            if('0' <= s[i] and s[i] <= '9') continue;
            else{
                printf("No\n");
                return 0;
            }
        }
        else if(i == a) {
            if(s[i] == '-') continue;
            else{
                printf("No\n");
                return 0;
            }
        }
        else {
            if('0' <= s[i] and s[i] <= '9') continue;
            else{
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes\n");
    return 0;
}