#include <iostream>
#include <cstdio>
using namespace std;

int dp[100100][2][101];

int main(){
    int d;
    cin >> d;

    string n;
    cin >> n;

    //printf("input fin\n");

    //printf("n length %d\n", (int)n.length());

    

    /*for(int digit = 0; digit < 10000; digit++){
        for(int smaller = 0; smaller < 2; smaller++){
            for(int modD = 0; modD < 100; modD++){
                dp[digit][smaller][modD] = -1;
            }
        }
    }*/
    dp[0][0][0] = 1;
    //printf("init fin\n");
    for(int digit = 0; digit < n.length(); digit++){
        for(int smaller = 0; smaller < 2; smaller++){
            for(int modD = 0; modD < d; modD++){
                for(int x = 0; x <= (smaller ? 9 : (n[digit]-'0')); x++){
                    dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d] += (dp[digit][smaller][modD])%(1000000007);
                    dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d] = dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d]%1000000007;
                    //printf("%d ", dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d]);
                    //printf("digit %d smaller %d modD %d\n", digit, smaller, modD);
                }
            }
        }
    }

    printf("%d\n", (dp[n.length()][1][0] + dp[n.length()][0][0]- 1 + 1000000007)%1000000007);

    return 0;
}