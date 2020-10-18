/*
long longは64bitなので最大値は2^64 - 1 =9,223,372,036,854,775,807
~ 9e18 < 1e19　これを使ってオーバーフローを対策する
intは32bit 
 */

///__uint128_tを用いたオーバーフロー対策
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

//このままだと出力できないのでこれを書く
std::ostream &operator<<(std::ostream &dest, __int128_t value) {
  std::ostream::sentry s(dest);
  if (s) {
    __uint128_t tmp = value < 0 ? -value : value;
    char buffer[128];
    char *d = std::end(buffer);
    do {
      --d;
      *d = "0123456789"[tmp % 10];
      tmp /= 10;
    } while (tmp != 0);
    if (value < 0) {
      --d;
      *d = '-';
    }
    int len = std::end(buffer) - d;
    if (dest.rdbuf()->sputn(d, len) != len) {
      dest.setstate(std::ios_base::badbit);
    }
  }
  return dest;
}

int main(){
    __int128_t x, y, a, b;//これは標準入力できない

    long long X, Y, A, B;//long longで受け取って__int_128_t に代入する
    cin >> X >> Y >> A >> B;

    x = X;
    y = Y;
    a = A;
    b = B;

    __int128_t ans = 0;
    while(a * x <= b + x and a * x < y){
        x *= a;
        ans++;
    }

    __int128_t diff = (y - x - 1)/b;
    if(diff > (__int128_t)0) ans += diff;

    cout << ans << endl;
    return 0;
}