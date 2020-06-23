#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }


    long long right = 1;
    long long count = 0;
    for(long long left = 0; left < n; left++){
        while(right < n and (right <= left || a[right-1] < a[right])){
            right++;
        }
        
        //printf("right %lld left %lld\n", right, left);
        count += right - left;
        
        if(right == left){
            //printf("equal right %lld left %lld\n", right, left);
            right++;
        }
    }
    printf("%lld\n", count);
    return 0;
}