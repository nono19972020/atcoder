#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    string s[n];
    long long p[n];
    long long count = 0;

    for(long long i = 0; i < n; i++){
        cin >> s[i] >> p[i];
        count += p[i];
    }

    long long mid;
    if(count % 2 == 0){
        mid = count/2;
        for(long long i = 0; i < n; i++){
        if(mid < p[i]){
            cout << s[i] << endl;
            return 0;
        }
    }
    }
    else{
        mid = count/2 + 1;
        for(long long i = 0; i < n; i++){
        if(mid <= p[i]){
            cout << s[i] << endl;
            return 0;
        }
    }
    }


    printf("atcoder\n");
    return 0;
}