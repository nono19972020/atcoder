#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(long long i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            if(isupper(s[i]) != 0){
                printf("No\n");
                return 0;
            }
        }
        else{
            if(isupper(s[i]) == 0){
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes\n");
    return 0;
}