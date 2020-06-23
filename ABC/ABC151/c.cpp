#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    set<long long> ac;
    
    long long count_ac = 0, count_wa = 0;
    vector<long long> count(n+1, 0);

    for(long long i = 0; i < m; i++){
        long long number;
        string s;
        cin >> number >> s;
        if(ac.find(number) == ac.end()){
            if(s == "WA"){
                count[number]++;
            }
            else if(s == "AC"){ 
                count_ac++;
                count_wa += count[number];
                ac.insert(number);
            }
        }
    }

    printf("%lld %lld\n", count_ac, count_wa);

    return 0;
}