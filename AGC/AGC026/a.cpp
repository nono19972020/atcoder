#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    

    for(long long i = 0; i < n; i++) cin >> a[i];


    long long cnt = 0;
    long long i = 0;

    while(i < n){
        if(i+1 < n and a[i] == a[i+1]){
            long long length = 1;

            while(i+1 < n and a[i] == a[i+1]){
                i++;
                length++;
            }
            cnt += length/2;
        }
        i++;
    }

    cout << cnt << endl;
    return 0;
}