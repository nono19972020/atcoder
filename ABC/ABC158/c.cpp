#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    for(long long i = 0; i <= 20000; i++){
        long double yen = (long double) i;
        long long tax_8 = yen * 0.08;
        long long tax_10 = yen * 0.1;
        if(tax_8 == a and tax_10 == b){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}