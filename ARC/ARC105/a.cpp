#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == b + c + d) printf("Yes\n");
    else if(b == c + d + a) printf("Yes\n");
    else if(c == b + d + a) printf("Yes\n");
    else if(d == b + c + a) printf("Yes\n");
    else if(a  + b ==  c + d) printf("Yes\n");
    else if(a  + c ==   b + d) printf("Yes\n");
    else if(a  + d ==   b + c) printf("Yes\n");
    else printf("No\n");


    return 0;
}