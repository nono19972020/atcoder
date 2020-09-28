#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a, b;
    cin >> a >> b;

    vector<long long> first;
    vector<long long> second;
    vector<long long> third;

    for(long long i = 0; i < n; i++){
        long long p;
        cin >> p;

        if(p <= a) first.push_back(p);
        else if(a < p and p <= b) second.push_back(p);
        else if(p > b) third.push_back(p);
    }

    long long ans = min((long long)first.size(), (long long)second.size());
    ans = min(ans, (long long)third.size());

    cout << ans << endl;
    return 0;
}