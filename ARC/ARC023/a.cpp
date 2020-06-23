#include <iostream>
#include <cstdio>
using namespace std;

long long day(long long y, long long m, long long d){
    if(m == 1){
        y--;
        m = 13;
    }
    else if(m == 2){
        y--;
        m = 14;
    }

    return 365*y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429;
}

int main(){
    long long y, m, d;
    cin >> y >> m >> d;

    cout << day(2014, 5, 17) - day(y, m, d) << endl;

    return 0;
}