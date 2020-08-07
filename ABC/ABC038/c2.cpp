#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];

    for(long long i = 0; i < n; i++) cin >> a[i];

    long long cnt = 0;
    long long right = 1;
    
    for(long long left = 0; left < n; left++){
        while(right < n and (right <= left || a[right-1] < a[right])) right++;
        

        cnt += right - left;
        
        if(right == left) right++;
    }

    cout << cnt << endl;
    return 0;
}