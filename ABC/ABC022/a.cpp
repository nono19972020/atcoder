#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, s, t;
    long long weight;
    cin >> n >> s >> t >> weight;

    long long count = 0;
    if(s<= weight and weight <= t){
        count++;
    }

    
    vector<long long> v;
    for(long long i = 0; i < n-1; i++){
        long long delta;
        cin >> delta;
        weight += delta;
        v.push_back(weight);
    }

    for(long long i = 0; i < v.size(); i++){
        if(s <= v[i] and v[i] <= t){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}