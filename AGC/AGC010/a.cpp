#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long cnt_odd = 0;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a % 2 != 0) cnt_odd++;
    }

    if(cnt_odd % 2 == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}