#include <iostream>
#include <cstdio>
using namespace std;

bool solve(long long r, long long b, long long x, long long y, long long mid){
    r = r - mid;
    b = b - mid;
    if(r < 0 || b < 0){
        return false;
    }

    long long num = r/(x-1) + b/(y-1);
    if(num >= mid){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    long long R, B, x, y;
    cin >> R >> B >> x >> y;

    long long left = 0;
    long long right = max(R, B);

    long long mid;

    while(right - left > 1){
        mid = (left+right)/2;

        if(solve(R, B, x, y, mid) == true){
            left = mid;
        }
        else{
            right = mid;
        }
    }

    cout << left << endl;

    return 0;

}