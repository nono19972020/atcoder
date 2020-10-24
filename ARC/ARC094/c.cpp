#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long maxv = max(a, b);
    maxv = max(maxv, c);

    long long sum = a + b + c;
    while(1){
        if(sum % 3 == 0 and sum /3 >= maxv){
            break;
        }
        sum += 2;
    }

    long long ans = (sum - (a+b+c))/2;
    cout << ans << endl;
    return 0;
}