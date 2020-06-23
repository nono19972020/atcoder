#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
 
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long count = 0;
    long long right = 0;
    long long sum = 0;
    for(long long left = 0; left < n; left++){
        while(right < n and sum < k){
            sum += a[right];
            right++;
        }
        if(sum < k){
            break;
        }

        count += n-right+1;

        if(right == left){
            right++;
        }
        else{
            sum -= a[left];
        }

    }

    cout << count << endl;

    return 0;
}