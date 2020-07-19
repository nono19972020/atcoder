#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long count = 0;
    for(long long i = 0; i < n; i++){
        if(a[i] % 6 == 2) count++;
        else if(a[i] % 6 == 4) count++;
        else if(a[i] % 6 == 5) count += 2;
        else if(a[i] % 6 == 0) count += 3;
    }

    cout << count << endl;
    return 0;
}