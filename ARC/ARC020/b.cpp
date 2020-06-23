#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, c;
    cin >> n >> c;
    long long a[n];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long cost_min = 1e9;
    for(long long i = 1; i <= 10; i++){
        for(long long j = 1; j <= 10; j++){
            if(i == j){
                continue;
            }
            long long first = i;
            long long second = j;
            long long cost = 0;
            for(long long k = 0; k < n; k++){
                if(k % 2 == 0){
                    if(a[k] == first){
                        continue;
                    }
                    cost += c;
                }
                else{
                    if(a[k] == second){
                        continue;
                    }
                    cost += c;
                }
            }
            cost_min = min(cost_min, cost);
        }
    }

    cout << cost_min << endl;
    return 0;
}