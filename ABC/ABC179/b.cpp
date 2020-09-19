#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<bool> zoro(n ,false);

    for(long long i = 0; i < n; i++){
        long long d1, d2;
        cin >> d1 >> d2;
        if(d1 == d2) zoro[i] = true;
    }

    for(long long i = 0; i < n; i++){
        if(i + 2 < n and zoro[i] == true and zoro[i+1] == true and zoro[i+2] == true){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}