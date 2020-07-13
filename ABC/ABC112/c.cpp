#include <iostream>
#include <cstdio>
#include <set>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long x[n], y[n], h[n];
    long long si;
    for(long long i = 0; i < n; i++){
        cin >> x[i] >> y[i] >> h[i];
        if(h[i] > 0) si = i;//全部0はありえない
    }

    long long ansx, ansy, ansh;  
    for(long long cy = 0; cy <= 100; cy++){
        for(long long cx = 0; cx <= 100; cx++){
            long long H = h[si] + abs(cx-x[si]) + abs(cy-y[si]);//高さを先に仮定する
            bool ok = true;

            for(long long i = 0; i < n; i++){
                if(h[i] > 0 and  H != h[i] + abs(cx-x[i]) + abs(cy-y[i])){
                    ok = false;
                }
                if(h[i] == 0 and H > abs(cx-x[i]) + abs(cy-y[i])){
                    ok = false;
                }
            }

            if(ok == true) ansx = cx, ansy = cy, ansh = H;
        }
    }
    

    cout << ansx << " " << ansy << " " << ansh << endl;
    return 0;
}