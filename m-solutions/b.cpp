#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b, c, k;
    cin >> a >> b >> c;
    cin >> k;

    long long cnt = 0;
    if(b <= a){
        while(b <= a){
            cnt++;
            b = 2 * b;
        }
    }

    if(cnt > k){
        printf("No\n");
        return 0;
    }

    if(c <= b){
        while(c <= b){
            cnt++;
            c = 2 * c;
        }
    }

    if(cnt > k) printf("No\n");
    else printf("Yes\n");
        
    return 0;
}