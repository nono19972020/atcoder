#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

long long gcd(long long x, long long y){
    if(y == 0){
        return x;
    }
    return gcd(y, x%y);
}

int main(){
    long long a, b;

    cin >> a >> b;

    long long g = gcd(a, b);

    if(g == 1){
        printf("1\n");
        return 0;
    }

    long long num = g;
    long long count = 1;

    for(long long i = 2; i*i <= g+1; i++){
        if(num % i != 0){
            continue;
        }

        bool first = true;
        while(num % i == 0){
            if(first == true){
                count++;
            }
            first = false;
            num /= i;
        }
    }
    if(num != 1){
        count++;
    }

    cout << count << endl;

    return 0;

}