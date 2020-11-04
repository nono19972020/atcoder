#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    vector<bool> flag(3, false);
    long long a, b;
    cin >> a >> b;
    flag[a-1] = true;
    flag[b-1] = true;

    for(long long i = 0; i < 3; i++){
        if(flag[i] == false){
            printf("%lld\n", i+1);
            return 0;
        }
    }
}