#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long l[n];
    for(long long i = 0; i < n; i++) cin >> l[i];

    long long cnt = 0;
    for(long long i = 0; i < n; i++){
        for(long long j = i + 1; j < n; j++){
            for(long long k = j + 1; k < n; k++){
                if(l[i] != l[j] and l[j] != l[k] and l[k] != l[i] and l[j] + l[k] > l[i] and l[i] + l[k] > l[j] and l[j] + l[i] > l[k]){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}