#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n+1], b[n];

    for(long long i = 0; i <= n; i++){
        cin >> a[i];
    }

    for(long long i = 0; i < n; i++){
        cin >> b[i];
    }

    long long count = 0;
    long long zanki;
    for(long long i = 0; i <= n; i++){
        if(i == 0){
            count += min(a[i], b[i]);
            zanki = max((long long)0, b[i] - a[i]);
        }
        else if(1 <= i and i < n){
            count += min(a[i], b[i]+zanki);
            if(a[i] < zanki){
                zanki = b[i];
            }
            else{
                zanki = max((long long) 0, b[i] - a[i]+zanki);
            }

        }
        else if(i == n){
            count += min(a[i], zanki);
        }
    }

    cout << count << endl;

    return 0;
}