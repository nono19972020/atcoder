#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, t;
    cin >> n >> t;

    vector<long long> v;

    long long a_time = 0;
    long long b_time = 0;

    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        a_time += a;
        b_time += b;
        v.push_back(a-b);
    }

    if(b_time > t){
        printf("-1\n");
        return 0;
    }

    sort(v.begin(), v.end(), greater<long long>());

    long long count = 0;
    long long i = 0;
    while(1){
        if(a_time <= t){
            break;
        }
        a_time -= v[i];
        i++;
        count++;
    }

    printf("%lld\n", count);

    return 0;
}