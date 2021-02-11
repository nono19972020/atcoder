#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    if(a != 1 and b != 1 and a > b) printf("Alice\n");
    else if(a != 1 and b != 1 and a < b) printf("Bob\n");
    else if(a == 1 and b != 1) printf("Alice\n");
    else if(a != 1 and b == 1) printf("Bob\n");
    else if(a == b) printf("Draw\n");

    return 0;
}