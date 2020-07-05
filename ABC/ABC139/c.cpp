#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long h[n];
    for(long long i = 0; i < n; i++){
        cin >> h[i];
    }

    long long i = 0;
    long long length_max = 0;
    while(i < n){
        if(h[i] >= h[i+1]){
            long long length = 0;
            while(h[i] >= h[i+1] and i+1 < n){
                length++;
                i++;
            }
            //printf("length %lld\n", length);
            length_max = max(length_max, length);
        }
        i++;
    }
    cout << length_max << endl;
    return 0;
}