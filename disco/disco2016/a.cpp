#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    long long w;
    cin >> w;

    long long n = s.size();
    long long i = 0;

    while(i < n){
        cout << s.substr(i, w) << endl;
        i += w;
    }

    return 0;
}