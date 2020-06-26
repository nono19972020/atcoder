#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long p[n];

    for(long long i = 0; i < n; i++){
        cin >> p[i];
    }

    long long minv = 1e9;
    long long count = 0;
    for(long long i = 0; i < n; i++){
        if(minv > p[i]){
            minv = p[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}