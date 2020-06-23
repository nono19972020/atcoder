#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long x, n;
    cin >> x >> n;
    if(n == 0){
        cout << x << endl;
        return 0;
    }

    vector<long long> p(n);

    for(long long i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    long long distance = 1e9;
    long long minv = 1e9;

    for(long long i = 0; i <= 200; i++){
        if(binary_search(p.begin(), p.end(), i) == false){
            distance = min(distance, abs(x-i));
        }
    }

    for(long long i = 0; i <= 200; i++){
        if(binary_search(p.begin(), p.end(), i) == false){
            if(distance == abs(x-i)){
                minv = min(minv, i);
            }
        }
    }

    cout << minv << endl;

    return 0;
}