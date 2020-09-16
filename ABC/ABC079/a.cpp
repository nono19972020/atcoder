#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long i = 0;
    long long n = s.size();

    bool flag = false;
    while(i < n){
        if(s[i] == s[i+1]){
            long long length = 1;

            while(i < n and s[i] == s[i+1]){
                i++;
                length++;
            }
            if(length >= 3) flag = true;
        }
        i++;
    }

    if(flag == true) printf("Yes\n");
    else printf("No\n");
    return 0;
}