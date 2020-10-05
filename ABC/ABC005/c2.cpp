#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long t, n, m;
    cin >> t >> n;

    long long a[n];
    for(long long i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    long long b[m];
    for(long long i = 0; i < m; i++) cin >> b[i];

    long long a_index = 0, b_index = 0;

    while(a_index < n and b_index < m){
        if(a[a_index] <= b[b_index] and b[b_index] <= a[a_index] + t){
            a_index++;
            b_index++;
        }
        else{
            a_index++;
        }
    }
    if(b_index >= m) printf("yes\n");
    else printf("no\n");

    return 0;
}