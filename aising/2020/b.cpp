#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n+1, 0);

    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }

    long long count = 0;
    for(long long i = 1; i <= n; i++){
        if(i % 2 != 0 and a[i] % 2 != 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}