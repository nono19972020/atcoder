#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    if(a == b and b == c and a % 2 == 0){
        printf("-1\n");
        return 0;
    }

    long long tmp_a, tmp_b, tmp_c;
    long long count = 0;
    while(1){
        if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0){
            break;
        }

        tmp_a = (b+c)/2;
        tmp_b = (c+a)/2;
        tmp_c = (a+b)/2;
        a = tmp_a;
        b = tmp_b;
        c = tmp_c;
        count++;
    }
    cout << count << endl;
    return 0;

}