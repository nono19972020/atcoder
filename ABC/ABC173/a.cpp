#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long money;
    for(long long i = 1; i <= 10; i++){
        if(n <= 1000 * i){
            money = 1000*i;
            break;
        }
    }

    cout << money - n << endl;
    return 0;
}