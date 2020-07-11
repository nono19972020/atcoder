#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long count = 0;
    long long i = 0;

    while(i < n){
        long long sum = 0;
        while(i < n and a[i] != 0){
            sum += a[i];
            i++;
        }
        count += sum/2;
        i++;
    }

    cout << count << endl;
    return 0;
}