#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> L(n);

    for(long long i = 0; i < n; i++){
        cin >> L[i];
    }

    sort(L.begin(), L.end());

    long long count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int k = lower_bound(L.begin(), L.end(), L[i]+L[j]) - L.begin();
            //printf("k %d\n", k);
            count += k - (j+1);
        }
    }

    cout << count << endl;

    return 0;
}