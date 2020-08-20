#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;
    long long cnt = 0;
    long long cnt_b = 0;
    for(long long i = 0; i < n; i++){
        if(s[i] == 'c') printf("No\n");
        else if(s[i] == 'a'){
            if(cnt < a + b) printf("Yes\n"), cnt++;
            else printf("No\n");
        }
        else if(s[i] == 'b'){
            cnt_b++;
            if(cnt < a + b and cnt_b <= b) printf("Yes\n"), cnt++;
            else printf("No\n");
        }
    }
    return 0;
}