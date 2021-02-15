#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    long long t = 1, f = 1;
    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;

        if(s == "AND") f = t + 2*f;
        else t = 2*t + f;
        
    }
    cout << t << endl;
    return 0;
}