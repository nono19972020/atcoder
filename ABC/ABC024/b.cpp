#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, t;
    cin >> n >> t;

    long long a[n];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long start, goal, count = 0;
    for(long long i = 0; i < n; i++){
        if(i == 0){
            start = a[i];
            goal = a[i] + t;
            continue;
        }

        if(goal < a[i]){
            count += goal - start;
            start = a[i];
            goal = a[i] + t;
        }
        else{
            goal = a[i] + t;
        }
        //printf("i %lld count %lld\n", i, count);
    }
    count += goal - start;

    cout << count << endl;
    return 0;
}