#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long l, r, d;
    cin >> l >> r >> d;

    long long count = 0;

    for(long long i = l; i <= r; i++){
        if(i % d == 0){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}