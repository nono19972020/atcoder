#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long sum = 0;
    for(long long i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }

    if(sum % 9 == 0) printf("Yes\n");
    else printf("No\n");

    return 0;
}