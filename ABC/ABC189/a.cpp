#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    if(s[0] == s[1] and s[1] == s[2]) printf("Won\n");
    else printf("Lost\n");

    return 0;
}