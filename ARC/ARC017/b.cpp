#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n ,k;
    cin >> n >> k;

    vector<long long> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long late_low_index = -1;
    for(long long i = 1; i < k; i++){
        if(a[i] - a[i-1] <= 0){
            late_low_index = i;
        }
    }
    
    long long count = 0;
    for(long long i = 0; i + k - 1 < n; i++){
        if(a[i+k-1] - a[i+k-2] <= 0){
            late_low_index = i+k-1;
        }

        if(late_low_index <= i){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}