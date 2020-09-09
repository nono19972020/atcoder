#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;

    long long a[n];
    for(long long i = 0; i < n; i++) cin >> a[i];

    long long cnt = 0;

    for(long long i = 0; i < n; i++){
        if(i + 1 < n and a[i] + a[i+1] > x){
            long long eat = a[i] + a[i+1] - x;
            cnt += eat;
            if(eat <= a[i+1]){
                a[i+1] -= eat;
            }
            else{
                eat -= a[i+1];
                a[i+1] = 0;
                a[i] -= eat;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}