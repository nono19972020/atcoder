#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<long long>());
    long long sum = 0;

    long long count = 0;
    long long index = 0;
    while(1){
        //printf("sum %lld\n", sum);
        if(count == n-1){
            break;
        }

        if(count == 0){
            sum += a[index];
            index++;
        }
        else{

            sum += a[index];
            if(count % 2 != 1){
                index++;
            }

        }

        count++;
    }

    cout << sum << endl;
    return 0;
}