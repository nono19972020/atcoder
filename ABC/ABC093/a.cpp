#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long cnt_a = 0, cnt_b = 0, cnt_c = 0;

    for(long long i = 0; i < 3; i++){
        if(s[i] == 'a') cnt_a++;
        else if(s[i] == 'b') cnt_b++;
        else if(s[i] == 'c') cnt_c++;
    }

    if(cnt_a == 1 and cnt_b == 1 and cnt_c == 1) printf("Yes\n");
    else printf("No\n");

    return 0;
}