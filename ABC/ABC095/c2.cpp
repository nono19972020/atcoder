#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    long long minv = 1e12;
    for(long long c_num = 0; c_num <= 2*1e5; c_num += 2){
        long long money = 0;
        money += c_num * c;
        if(x > c_num/2){
            money += (x - c_num/2) * a;
        }

        if(y > c_num/2){
            money += (y - c_num/2) * b;
        }

        minv = min(minv, money);
    }

    cout << minv << endl;
    return 0;
}