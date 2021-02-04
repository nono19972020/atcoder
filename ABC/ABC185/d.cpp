#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<bool> A(n, true);
    for(long long i = 0; i < m; i++){
        long long a;
        cin >> a;
        A[a-1] = false;
    }

    long long i = 0;
    long long minv = n - m;
    vector<long long> white;
    while(i < n){
        if(A[i] == true){
            long long length = 0;
            while(i < n and A[i] == true){
                i++;
                length++;
            }
            white.push_back(length);
            minv = min(minv, length);
        }
        i++;
    }

    if(minv == 0) printf("0\n");
    else{
        long long ans = 0;
        for(long long j = 0; j < white.size(); j++){
            if(white[j] % minv == 0) ans += white[j] / minv;
            else{
                long long r = white[j] / minv;
                ans += r + 1;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}