#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long k;
    cin >> k;

    long long cnt_odd = 0, cnt_even = 0;
    for(long long i = 1; i <= k; i++){
        if(i % 2 == 0) cnt_even++;
        else cnt_odd++;
    }

    cout << cnt_even * cnt_odd << endl;

    return 0;
}