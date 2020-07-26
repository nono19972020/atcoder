#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b){
  if(b== 0){
    return a;
  }
  return gcd(b, a%b);
}

int main(){
    long long a, b;
    cin >> a >> b;
    long long g;
    g = gcd(a, b);
    long long num = g;
    long long cnt = 0;

    for(long long i = 2; i*i <= g+1; i++){
        if(num % i != 0){
            continue;
        }

        bool first = true;
        while(num % i == 0){
            if(first == true){
                cnt++;
            }
            first = false;
            num /= i;
        }
    }

    if(num != 1){
        cnt++;
    }
    cnt++;
    cout << cnt << endl;
    return 0;
}