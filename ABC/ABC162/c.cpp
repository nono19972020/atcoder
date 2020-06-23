#include <iostream>
#include <cstdio>
using namespace std;

int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}


int main(){

    int K;

    cin >> K;

    int sum = 0;

    int a, b, c;
    int d;

    for(a = 1; a <= K; a++){
        for(b = 1; b <= K; b++){
            for(c = 1; c <= K; c++){
                d = gcd(b, c);
                sum = sum + gcd(a, d);
            }
        }
    }

    printf("%d\n", sum);

    return 0;
    
}