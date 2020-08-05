#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> s(n);
    long long cnt_0 = 0;
    long long cnt_k = 0;

    for(long long i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == 0) cnt_0++;
        if(s[i] <= k) cnt_k++;
    }

    if(cnt_0 > 0){
        printf("%lld\n", n);
        return 0;
    }
    if(cnt_k == 0){
        printf("0\n");
        return 0;
    }

    long long maxv = 0;
    long long right = 0;
    long long sum = 1;

    for(long long left = 0; left < n; left++){
        while(right < n and sum * s[right] <= k){
            sum *= s[right];
            right++;
        }

        maxv = max(maxv, right-left);

        if(right == left) right++;
        else sum /= s[left];
    }
    
    cout << maxv << endl;
    return 0;
}