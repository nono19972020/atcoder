#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;

    int t[n];

    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    int min_time = 1e9;

    for(int bit = 0; bit < (1 << n); bit++){
        int time_a = 0, time_b = 0;
        int max_time;
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                time_a = time_a + t[i];
            }
            else{
                time_b = time_b + t[i];
            }
        }
        max_time = max(time_a, time_b);
        min_time = min(min_time, max_time);
    }

    printf("%d\n", min_time);
    return 0;
}