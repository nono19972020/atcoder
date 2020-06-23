#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long m, n, N;
    cin >> m >> n >> N;

    long long now = N, old = 0, count = N;

    while(now + old >= m){
        long long tmp_now, tmp_old;
        tmp_now = now;
        tmp_old = old;
        now = ((tmp_now+tmp_old)/m)*n;
        old = (tmp_now+tmp_old)%m;
        
        count += now;
    }

    cout << count << endl;
    return 0;
}