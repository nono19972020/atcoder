#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long long a, b ,c;

    cin >> a >> b >> c;

    long long  minv = a*b*c;
    if(a %2 != 0 and b %2 != 0 and c %2 != 0){
        long long  a_div1 = a/2;
        long long  a_div2 = a - a/2;
        long long  b_div1 = b/2;
        long long  b_div2 = b - b/2;
        long long  c_div1 = c/2;
        long long  c_div2 = c - c/2;

        /*printf("a_div1 %d\n", a_div1);
        printf("a_div2 %d\n", a_div2);
        printf("b_div1 %d\n", b_div1);
        printf("b_div2 %d\n", b_div2);
        printf("c_div1 %d\n", c_div1);
        printf("c_div2 %d\n", c_div2);*/

        long long  a_div = abs(a_div1*b*c - a_div2*b*c);
        long long  b_div = abs(b_div1*a*c - b_div2*a*c);
        long long  c_div = abs(c_div1*a*b - c_div2*a*b);

        minv = min(minv, a_div);
        minv = min(minv, b_div);
        minv = min(minv, c_div);
    }
    else{
        minv = 0;
    }

    cout << minv << endl;

    return 0;
}
