#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector <long long> A;

    long long a;
    long long sum;
    for(long long i = 0; i < n; i++){
        cin >> a;
        sum += a;
        A.push_back(a);
    }
    
     vector <long long> S(n+1, 0);

    for(long long i = 0; i < n; i++){
        S[i+1] = S[i] + A[i];
    }

    long long minv = abs(S[1]-(sum - S[1]));

    for(long long i = 0; i < n; i++){
        if(i == n-1){
            continue;
        }
        long long delta = abs(S[i+1]-(sum - S[i+1]));
        minv = min(minv, delta);
    }

    cout << minv << endl;

    return 0;


}