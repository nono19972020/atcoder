#include <iostream>
#include <cstdio>
using namespace std;

long long keta(long long n){
    string s = to_string(n);
    long long sum = 0;
    for(long long i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    long long x;
    cin >> x;

    if(x % keta(x) == 0) printf("Yes\n");
    else printf("No\n");

    return 0;
}