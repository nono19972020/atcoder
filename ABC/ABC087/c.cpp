#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
using namespace std;

int main(){
    int n;

    cin >> n;

    int a[3][n + 1];

    a[1][0] = 0;
    a[2][0] = 0;

    for(int j = 1; j<=2; j++){
        for(int i = 1; i <= n; i++){
            cin >> a[j][i];
        }
    }

    vector<int> w1(n + 2, 0);
    vector<int> w2(n + 2, 0);

    for(int i = 0; i <= n; i++){
        w1[i + 1] = a[1][i] + w1[i];
        w2[i + 1] = a[2][i] + w2[i];
    }

    int maxv = 0;

    for(int k = 1; k <= n; k++){
        maxv = max(maxv, w1[k + 1] + w2[n + 1] - w2[k]);
    }

    printf("%d\n", maxv);

    return 0;


}